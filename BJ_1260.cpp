/*#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string.h>
using namespace std;

vector<vector<int>> vc;
bool visited[1000];

void DFS(int index)
{
	if (visited[index]) return;
	visited[index] = true;
	cout << index + 1 << " ";
	sort(vc[index].begin(),vc[index].end());
	for (int i = 0; i < vc[index].size(); i++)
	{
		DFS(vc[index].at(i));
	}
}

void BFS(int index)
{
	queue <int> que;
	que.push(index);
	visited[index] = true;

	while (!que.empty())
	{
		int temp = que.front();
		que.pop();
		cout << temp + 1 << " ";
		for (int i = 0; i < vc[temp].size(); i++)
		{
			int next = vc[temp].at(i);
			if (!visited[next])
			{
				visited[next] = true;
				que.push(next);
			}
		}

	}
}

int main()
{
	int n, m, v, a, b;
	cin >> n >> m >> v;
	vector<int> tvc;

	for (int i = 0; i < n + 1; i++)
	{
		vc.push_back(tvc);
	}
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		a -= 1, b -= 1;
		vc[a].push_back(b);
		vc[b].push_back(a);
	}
	memset(visited, false, 1000 * sizeof(bool));
	DFS(v - 1);
	memset(visited, false, 1000 * sizeof(bool));
	cout << endl;
	BFS(v - 1);
}
*/