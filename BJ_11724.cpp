/*#include <iostream>
#include <vector>
using namespace std;

bool visit[1001];
vector <int> vc[1001];

void DFS(int index)
{
	if (visit[index]) return;
	visit[index] = true;
	for (int i = 0; i < vc[index].size(); i++)
	{
		DFS(vc[index][i]); // DFS 시행
	}
}

int main()
{
	int n, m , tmp1, tmp2, cnt = 0;
	cin >> n >> m;
	while (m--)
	{
		cin >> tmp1 >> tmp2;
		vc[tmp1].push_back(tmp2); // 해당 노드에 연결되었다면 push
		vc[tmp2].push_back(tmp1); // 반대로도 push
	}
	for (int i = 1; i <= n; i++)
	{
		if (visit[i]) continue;
		if (vc[i].empty()) // 혼자 있는 노드라면
		{
			cnt++; 
			continue;
		}
		DFS(i);
		cnt++;
	}

	cout << cnt;

	return 0;
}
*/