/*#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
using namespace std;

bool compare(pair<string, int> a, pair<string, int> b)
{
	return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	map <string, int> mp;
	pair<string, int> ptemp;
	vector <string> vc;
	int n, m, temp;
	string str;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		vc.push_back(str);
		mp.insert(make_pair(str, i+1));
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;
		temp = atoi(str.c_str());
		if (temp != 0)
		{
			cout << vc.at(temp - 1) << "\n";
			continue;
		}
		ptemp = *mp.find(str);
		cout << ptemp.second << "\n";
	}

	return 0;
}
*/