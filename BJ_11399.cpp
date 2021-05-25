/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main()
{
	vector<int> vc;
	int n, p, time = 0;
	cin >> n;
	while (n--)
	{
		cin >> p;
		vc.push_back(p);
	}
	sort(vc.begin(), vc.end());
	for (int i = 0; i < vc.size(); i++)
	{
		if (i) vc[i] += vc[i - 1];
		time += vc[i];
	}

	cout << time;

	return 0;
}
*/