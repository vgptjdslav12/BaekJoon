/*#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
	if (a.second != b.second) return a.second < b.second;
	return a.first < b.first;
}

int main()
{
	vector<pair<int, int>> vc;
	pair<int, int> temp;

	int n, count = 0 , tmp = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp.first >> temp.second;
		vc.push_back(temp);
	}

	sort(vc.begin(), vc.end(), compare);

	for (int i = 0; i < n; i++)
	{
		if (tmp <= vc[i].first)
		{
			tmp = vc[i].second;
			count++;
		}
	}

	cout << count;

	return 0;
}
*/