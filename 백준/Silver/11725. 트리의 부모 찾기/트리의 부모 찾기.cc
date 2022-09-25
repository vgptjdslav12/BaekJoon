#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> vc[100001];
int parant[100001];

void dfs(int v)
{
	for (auto i : vc[v]) {
		if (parant[i] != 0) continue;
		parant[i] = v;
		dfs(i);
	}
}

void solve(int n)
{
	int a, b;
	for (int i = 0; i < n-1; i++) {
		cin >> a >> b;
		vc[a].push_back(b);
		vc[b].push_back(a);
	}
	dfs(1);
}

int main()
{\
	int n, a, b;
	cin >> n;
	parant[1] = 1;
	solve(n);
	for (int i = 2; i <= n; i++) {
		printf("%d\n", parant[i]);
	}
}