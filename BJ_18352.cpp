#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#define INF 99999999
#define MAX 300001
#define pb push_back
#define mp make_pair

vector<int> dk(int start, int n, vector<int> vc[])
{
	vector<int> dist(n + 1, INF);
	queue<int> q;

	dist[start] = 0;
	q.push(start);
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int i = 0; i < vc[cur].size(); i++) {
			int next = vc[cur][i];
			int nCost = 1 + dist[cur];
			if (nCost < dist[next]) {
				dist[next] = nCost;
				q.push(next);
			}
		}
	}
	return dist;
}

int main()
{
	vector<int> vc[MAX];
	vector<int> answer;
	int n, m, k, x, s, e, cnt = 0;
	cin >> n >> m >> k >> x;
	for (int i = 0; i < m; i++) {
		cin >> s >> e;
		vc[s].pb(e);
	}
	vector<int> dist = dk(x, n, vc);
	for (int i = 1; i <= n; i++) {
		if (k == dist[i]) {
			answer.pb(i);
		}
	}
	if (answer.size() == 0) cout << "-1";
	for (int i : answer) {
		cout << i << endl;
	}
}