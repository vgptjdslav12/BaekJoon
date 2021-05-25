/*#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, temp, min = 1000001, max = -1000001;
	vector <int> vc;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		vc.push_back(temp);
	}
	
	for (int i = 0; i < n; i++)
	{
		max = (max < vc.at(i)) ? vc.at(i) : max;
	}

	for (int i = 0; i < n; i++)
	{
		min = (min > vc.at(i)) ? vc.at(i) : min;
	}
	cout << min << " " << max;
	return 0;
}*/
