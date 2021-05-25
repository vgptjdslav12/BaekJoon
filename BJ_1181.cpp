/*#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <string>
using namespace std;

vector <string> vc;

bool compare(string a, string b)
{
	if (a.size() == b.size())
	{
		return a < b;
	}
	else
	{
		return a.size() < b.size();
	}
}
int main()
{
	int n;
	string str;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		vc.push_back(str);
	}
	sort(vc.begin(), vc.end(), compare);
	vc.erase(unique(vc.begin(), vc.end()), vc.end());
	for (int i = 0; i < vc.size(); i++)
	{
		cout << vc[i];
		if (i != vc.size() - 1) cout << endl;
	}
	return 0;
}
*/