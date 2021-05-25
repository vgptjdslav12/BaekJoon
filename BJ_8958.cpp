/*#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int t, score, add;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		add = 0;
		score = 0;
		cin >> str;
		for (int j = 0; j < str.length(); j++)
		{
			if (str.at(j) == 'X')
			{
				add = 0;
			}
			else
			{
				score += ++add;
			}
		}
		cout << score << endl;
	}
}*/