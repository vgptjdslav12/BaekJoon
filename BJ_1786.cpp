/*#include <iostream>
#include <vector>
#include <string>	
using namespace std;

vector<int> vc;

vector<int> get_pi(string p)
{
	int m = p.size() , j = 0;
	vector <int> pi(m,0);
	for (int i = 1; i < m; i++)
	{
		while (j > 0 && p[i] != p[j])
			j = pi[j - 1];
		if (p[i] == p[j]) pi[i] = ++j;
	}
	return pi;
}

vector<int> KMP(string t, string p)
{
	vector<int> ans;
	vector<int> pi = get_pi(p);
	int n = t.size(), m = p.size(), j = 0;
	for (int i = 0; i < n; i++)
	{
		while (j > 0 && t[i] != p[j])
			j = pi[j - 1];
		if (t[i] == p[j])
		{
			if (j == m - 1)
			{
				ans.push_back(i - m + 1);
				j = pi[j];
			}
			else j++;
		}
	}
	return ans;
}  

int main()
{
	string target;
	string str;
	getline(cin,target);
	getline(cin,str);
	auto ans = KMP(target, str);
	cout << ans.size() << "\n";
	for (int i : ans)
	{
		cout << i + 1 << "\n";
	}

	return 0;
}
*/