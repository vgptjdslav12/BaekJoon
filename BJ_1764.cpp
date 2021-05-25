/*#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> hear;
	vector<string> see;
	vector<string> hear_see;

	string str;
	int n, m,count = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		hear.push_back(str);
	}

	for (int i = 0; i < n; i++)
	{
		cin >> str;
		see.push_back(str);
	}

	sort(hear.begin(), hear.end());
	sort(see.begin(), see.end());

	for (int i = 0; i < n; i++)
	{
		if (binary_search(see.begin(), see.end(), hear[i]))
		{
			count++;
			hear_see.push_back(hear[i]);
		}
	}
	cout << count << "\n";
	for (string i : hear_see)
	{
		cout << i << "\n";
	}


	return 0;
}  
*/