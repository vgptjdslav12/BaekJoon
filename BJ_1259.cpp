/*#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str, fstr, bstr;
	while (1)
	{
		cin >> str;
		if (str.compare("0") == 0) break;
		if (str.size() % 2 == 0)
		{
			fstr = str.substr(0, str.size() / 2);
			bstr = str.substr(str.size() / 2, str.size());
			reverse(bstr.begin(), bstr.end());
			if (fstr.compare(bstr) == 0)
			{
				cout << "yes" << endl;
			}
			else cout << "no" << endl;
		}
		else
		{
			fstr = str.substr(0, (str.size() / 2));
			bstr = str.substr(str.size() / 2 + 1, str.size());
			reverse(bstr.begin(), bstr.end());
			if (fstr.compare(bstr) == 0)
			{
				cout << "yes" << endl;
			}
			else cout << "no" << endl;
		}
	}
	return 0;
}*/