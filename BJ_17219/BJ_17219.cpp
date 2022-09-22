#include <iostream>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	map <string, string> mp;
	int n, m;
	cin >> n >> m;
	string temp, temp2;
	for (int i = 0; i < n; i++)
	{
		cin >> temp >> temp2;
		mp.insert(make_pair(temp, temp2));
	}
	for (int i = 0; i < m; i++)
	{
		cin >> temp;
		cout << mp.at(temp) << "\n";
	}

	return 0;
}