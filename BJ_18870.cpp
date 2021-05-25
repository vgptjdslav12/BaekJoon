/*#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> vc;
	vector<int> order;
	int n, x;
	cin >> n;

	while (n--)
	{
		cin >> x;

		vc.push_back(x);
		order.push_back(x);
	}

	sort(vc.begin(), vc.end(), less<>());
	vc.erase(unique(vc.begin(), vc.end()),vc.end());

	for (int i = 0; i < order.size(); i++)
	{
		cout << lower_bound(vc.begin(), vc.end(), order[i]) - vc.begin() << " ";
	}

	return 0;
}
*/