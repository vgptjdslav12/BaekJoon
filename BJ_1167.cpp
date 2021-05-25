/*
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

#define MAX 100000

vector <pair<int, int>> vc[MAX + 1];
int big = 0 , far;
bool visit[MAX+1];


void DFS(int index, int sum)
{
	visit[index] = true;
	if (sum > big)
	{
		big = sum;
		far = index;
	}
	for (int i = 0; i < vc[index].size(); i++)
	{
		if (!visit[vc[index][i].first])
		{
			DFS(vc[index][i].first, sum + vc[index][i].second);
		}
	}

	return;
}

int main()
{
	int v, index, vertex, length;
	cin >> v;  
	while (v--)
	{
		cin >> index;
		while (true)
		{
			cin >> vertex;
			if (vertex == -1) break;
			cin >> length;
			vc[index].push_back(make_pair(vertex, length));
		}
	}

	DFS(1,0);
	memset(visit, 0, sizeof(visit));
	DFS(far,0);

	cout << big;

	return 0;
}
*/