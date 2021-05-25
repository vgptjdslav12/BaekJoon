/*#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

bool compare(pair<int,string> a ,pair<int,string> b)
{
	return a.first < b.first;
}

int main()
{
	cin.tie(NULL);
	int n;
	cin >> n;
	vector <pair<int, string>> vc(n);
	for (int i = 0; i < n; i++)
	{
		cin >> vc[i].first >> vc[i].second;
	}
	stable_sort(vc.begin(), vc.end(), compare);
	for (int i = 0; i < n; i++)
	{
		cout << vc[i].first << " " << vc[i].second << "\n";
	}
	return 0;
}
*/