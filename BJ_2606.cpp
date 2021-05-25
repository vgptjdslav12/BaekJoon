/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> arr[101];
bool visit[101];

int n, cnt = 0;

void func(int a)
{
	cnt++;
	visit[a] = true;
	int next;
	for (int i = 0; i < arr[a].size(); i++)
	{
		next = arr[a][i];
		if (visit[next]) continue;
		func(next);
	}
	return;
}

int main()
{
	int temp, tmp;
	int k;

	cin >> n >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> temp >> tmp;  
		arr[temp].push_back(tmp);     
		arr[tmp].push_back(temp);
	}

	func(1);

	cout << cnt - 1;

	return 0;
}
*/