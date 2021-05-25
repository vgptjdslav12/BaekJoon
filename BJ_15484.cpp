#include <iostream>
#include <string>
#include <utility>
#include <map>
using namespace std;

map<string, int> material;
map<string, string> posion;
int N, M;

int decomposition(map<string, string> mtemp)
{
	
}

int main()
{
	string stemp, stemp2;
	int temp;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> stemp >> temp;
		material.insert(make_pair(stemp,temp));
	}
	for (int i = 0; i < N; i++)
	{
		getline(cin, stemp, '=');
		cin >> stemp2;
		posion.insert(make_pair(stemp, stemp2));
	}
}