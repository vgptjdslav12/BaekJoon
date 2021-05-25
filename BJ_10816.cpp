/*#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define MAX 10000001

int main()
{
	ios::sync_with_stdio(false);

	vector <int> vc;
	vector <int> vc1;
	vector <int>::iterator iter;
	int n, m, temp, up, low;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		vc.push_back(temp);
	}
	vc.push_back(MAX);
	sort(vc.begin(), vc.end());

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		vc1.push_back(temp);
	}

	for (int i = 0; i < m; i++)
	{
		iter = upper_bound(vc.begin(), vc.end(), vc1[i]);
		up = iter - vc.begin();
		iter = lower_bound(vc.begin(), vc.end(), vc1[i]);
		low = iter - vc.begin();
		if ((up == low && up == vc.back()))
		{
			cout << "0 ";
			continue;
		}
		cout << up - low << " ";
	}

	return 0;
}
*/