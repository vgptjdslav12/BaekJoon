/*
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

#define MAX 20000
#define INF 300001


vector <pair<int, int>> vc[MAX+1];

struct compare
{
	bool operator()(pair<int, int>a, pair<int, int> b)
	{
		return a.second > b.second;
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, e, u, v, w, start;

	cin >> n >> e >> start;

	while (e--)
	{
		cin >> u >> v >> w;
		vc[u].push_back(make_pair(v, w));
	}
	vector<int> arr(n+ 1, INF);
	arr[start] = 0;
	priority_queue <pair<int, int>,vector<pair<int,int>>,compare> pq;
	pq.push(make_pair(start, 0));

	while (!pq.empty())
	{
		pair<int, int> tmp = pq.top();	
		int vertex = tmp.first;
		int distance = tmp.second;

		pq.pop();

		if (distance > arr[vertex]) continue;

		for (pair<int, int> i : vc[vertex])
		{
			int n_dist = i.second;
			int n_index = i.first;
			if (n_dist + distance < arr[n_index])
			{
				arr[n_index] = n_dist + distance;
				pq.push(make_pair(n_index, arr[n_index]));
			}
		}
	}

	for (int i = 1; i < n + 1; i++)
	{
		if (arr[i] == INF) cout << "INF" << "\n";
		else cout << arr[i] << "\n";
	}

	return 0;
}
*/