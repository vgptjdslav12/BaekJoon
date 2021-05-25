#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> vc;

int size();

int empty();

void push_back(int a)
{
	vc.push_back(a);
}

void push_front(int a)
{
	vc.insert(vc.begin(), a);
}

int pop_front()
{
	if (empty()) return -1;
	int temp = vc.front();
	vc.erase(vc.begin(), vc.begin() + 1);
	return temp;
}
int pop_back()
{
	if (empty()) return -1;
	int temp = vc.back();
	vc.erase(vc.end()-1, vc.end());
	return temp;
}

int size()
{
	return vc.size();
}

int empty()
{
	if (vc.empty()) return 1;
	return 0;
}

int front()
{
	if (empty()) return -1;
	return vc.front();
}

int back()
{
	if (empty()) return -1;
	return vc.back();
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	int n, temp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		if (str.find("push_front") != -1)
		{
			cin >> temp;
			push_front(temp);
			continue;
		}
		if (str.find("push_back") != -1)
		{
			cin >> temp;
			push_back(temp);
			continue;
		}
		if (str.compare("pop_front") == 0) 
		{
			cout << pop_front() << "\n";
			continue;
		}
		if (str.compare("pop_back") == 0)
		{
			cout << pop_back() << "\n";
			continue;
		}
		if (str.compare("size") == 0)
		{
			cout << size() << "\n";
			continue;
		}
		if (str.compare("empty") == 0)
		{
			cout << empty() << "\n";
			continue;
		}
		if (str.compare("front") == 0)
		{
			cout << front() << "\n";
			continue;
		}
		if (str.compare("back") == 0)
		{
			cout << back() << "\n";
			continue;
		}
	}
	return 0;
}