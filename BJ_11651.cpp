#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	vector<pair<int, int>> vc;
	int x, y, n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		vc.push_back(make_pair(x, y));
	}
	sort(vc.begin(), vc.end(), cmp);
	for (int i = 0; i < n; i++)
	{
		cout << vc.at(i).first << " " << vc.at(i).second << "\n";
	}
	return 0;
}