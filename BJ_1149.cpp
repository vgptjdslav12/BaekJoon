#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

#define MAX 1001

vector<tuple<int,int,int>> vc;
int arr[1001][3];
int memo[1001];

int min(int a, int b)
{
	return a < b ? a : b;
}

int main()
{
	int n, c1, c2, c3;
	cin >> n;
	arr[0][0] = arr[0][1] = arr[0][2] = 0;
	vc.push_back(make_tuple(0, 0, 0));
	for (int i = 0; i < n; i++)
	{
		cin >> c1 >> c2 >> c3;
		vc.push_back(make_tuple(c1, c2, c3));
	}

	for (int i = 1; i <= n; i++)
	{
		arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + get<0>(vc[i]);
		arr[i][1] = min(arr[i - 1][0], arr[i - 1][2]) + get<1>(vc[i]);
		arr[i][2] = min(arr[i - 1][0], arr[i - 1][1]) + get<2>(vc[i]);
	}
	cout << min(min(arr[n][0], arr[n][1]), arr[n][2]);

	return 0;
}
