/*#include <iostream>
#include <vector>

using namespace std;

void yose(vector<int> vc, int k, int index)
{
	if (vc.size() == 1)
	{
		cout << vc.front();
		return;
	}
	int temp = index + k;
	while (temp > vc.size() - 1)
	{
		temp -= (vc.size());
	}
	cout << vc[temp] << ", ";
	vc.erase(vc.begin() + temp);
	yose(vc, k, temp);
}

int main()
{
	vector<int> vc;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		vc.push_back(i + 1);
	}
	cout << "<";
	yose(vc, k - 1 , 0);
	cout << ">";

	return 0;
}
*/