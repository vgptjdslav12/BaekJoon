/*#include <iostream>
#include <vector>
using namespace std;

#define INF 210000000

vector<pair<int, int>> road[501];
int arr[501];
bool flag = false;
int n;

void BeFo()
{
	int next, d;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			for (auto p : road[j])
			{
				next = p.first, d = p.second;
				if (arr[j] != INF && arr[next] > arr[j] + d)
				{
					arr[next] = arr[j] + d;
					if (i == n) flag = true;
				}
			}
		}
	}

	return;
}

void reset()
{
	for (int i = 1; i < n; i++)
	{
		arr[i] = INF;
	}
	arr[1] = 0;
	for (int i = 0; i <= n; i++)
	{
		road[i].clear();
	}
	flag = false;
	return;
}

int main()
{
	int tc, m, t, w, u, v;

	cin >> tc;

	while (tc--)
	{
		cin >> n >> m >> w;
		reset();
		while (m--)
		{
			cin >> u >> v >> t;
			road[u].push_back(make_pair(v, t));
			road[v].push_back(make_pair(u, t));
		}
		while (w--)
		{
			cin >> u >> v >> t;
			road[u].push_back(make_pair(v, -t));
		}
		BeFo();
		if (flag) cout << "YES" << "\n";
		else cout << "NO" << "\n";
	}

	return 0;
}
*/