/*#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	int s = 0;
	int n, x;
	cin >> n;
	while (n--)
	{
		cin >> str >> x;

		if (str.compare("add") == 0)
		{
			s = s | (1 << x);
		}
		if (str.compare("remove") == 0)
		{
			s = s & ~(1 << x);
		}
		if (str.compare("check") == 0)
		{
			if (s & (1 << x))
			{
				cout << 1 << "\n";
			}
			else
			{
				cout << 0 << "\n";
			}
		}
		if (str.compare("toggle") == 0)
		{
			s = s ^ (1 << x);
		}
		if (str.compare("all") == 0)
		{
			cin.clear();
			s = (1 << 21) - 1;
		}
		if (str.compare("empty") == 0)
		{
			cin.clear();
			s =  0;
		}
	}

	return 0;
}
*/