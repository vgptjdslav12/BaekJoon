#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vc;
	int k, temp, sum = 0;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> temp;
		if (!temp)
		{
			vc.pop_back();
			continue;
		}
		vc.push_back(temp);
	}
	for (int i = 0; i < vc.size(); i++)
	{
		sum += vc[i];
	}
	cout << sum;
}