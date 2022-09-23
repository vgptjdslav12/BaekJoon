#include <iostream>
#include <queue>
using namespace std;
#define INF 987654321

long long a, b, imin = INF;
bool visit[100002];

void bfs(long long v)
{
	queue<pair<long long, long long>> q;
	visit[v] = true;
	q.push(make_pair(v, 0));
	while (!q.empty()) {
		long long cur = q.front().first;
		long long count = q.front().second;
		q.pop();
		if (cur == b) imin = imin > count ? count : imin;
		else {
			if (cur * 2 <= b + 1 && !visit[cur * 2]) {
				visit[cur * 2] = true;
				q.push(make_pair(cur * 2, count));
			}
			if (cur - 1 >= 0 && !visit[cur - 1]) {
				visit[cur - 1] = true;
				q.push(make_pair(cur - 1, count + 1));
			}
			if (cur + 1 <= b && !visit[cur + 1]) {
				visit[cur + 1] = true;
				q.push(make_pair(cur + 1, count + 1));
			}
		}
	}
}


int main()
{
	cin >> a >> b;
	bfs(a);
	if (imin == INF) cout << -1;
	else cout << imin;
}