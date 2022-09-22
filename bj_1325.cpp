#include <iostream>
#include <vector>
using namespace std;

bool visited[10001];
vector<vector<int>> vc;
vector<int> answer;

int dfs(int v, int count)
{
	visited[v] = true;
	for (int i = 0; i < vc[v].size(); i++) {
		if (visited[vc[v][i]]) continue;
		count = dfs(vc[v][i], count+1);
	}
	return count;
}

int main()
{
	int n, m, a, b, count = 0, big = 0;
	cin >> n >> m;
	for (int i = 0; i <= n; i++) {
		vector<int> temp;
		vc.push_back(temp);
	}
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		vc[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		fill_n(visited, 10001, false);
		int temp = dfs(i, 0);
		if (temp > big) {
			big = temp;
			answer.erase(answer.begin(), answer.end());
			answer.push_back(i);
		}
		else if (temp == big) answer.push_back(i);
		else continue;
	}
	for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << " ";
	}

	return 0;
}