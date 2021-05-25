/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b)
{
	if (a.first != b.first) return a.first < b.first;
	return a.second < b.second;
}

int main()
{
	ios::sync_with_stdio(false);
	vector<pair<int, int>> vc;

	int n,x,y;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		vc.push_back(pair<int, int>(x, y));
	}

	sort(vc.begin(), vc.end(), compare);
	
	for (int i = 0; i < n; i++)
	{
		cout << vc[i].first << " " << vc[i].second << "\n";
	}

	return 0;
}
*/