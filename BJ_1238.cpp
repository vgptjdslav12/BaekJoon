#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define INF 99999999 // 비용 최대치
#define MAX 1001 // 정점의 갯수 최대치
#define pb push_back
#define mp make_pair

vector<int> dk(int start, int n, vector<pair<int, int>> vc[])
{
	vector<int> dist(n + 1, INF);
	priority_queue<pair<int, int>> pq;

	dist[start] = 0;
	pq.push(mp(start, 0));

	while (!pq.empty()) {
		int cost = -pq.top().second;
		int cur = pq.top().first;
		pq.pop();

		for (int i = 0; i < vc[cur].size(); i++) {
			int next = vc[cur][i].first;
			int nCost = cost + vc[cur][i].second;
			if (nCost < dist[next]) {
				dist[next] = nCost;
				pq.push(make_pair(next, -nCost));
			}
		}
	}
	return dist;
}

int main()
{
	vector<pair<int, int>> vc[MAX];
	vector<int> answer[MAX];
	int n, m, x;
	int s, e, c;
	int big = 0, dist;
	cin >> n >> m >> x;
	for (int i = 0; i < m; i++) {
		cin >> s >> e >> c;
		vc[s].pb(mp(e, c));
	}
	for (int i = 1; i <= n; i++) {
		answer[i] = dk(i, n, vc);
	}
	for (int i = 1; i <= n; i++) {
		dist = answer[i][x] + answer[x][i];
		big = big < dist ? dist : big;
	}
	cout << big;
}