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
		DFS(vc[index][i]); // DFS ����
	}
}

int main()
{
	int n, m , tmp1, tmp2, cnt = 0;
	cin >> n >> m;
	while (m--)
	{
		cin >> tmp1 >> tmp2;
		vc[tmp1].push_back(tmp2); // �ش� ��忡 ����Ǿ��ٸ� push
		vc[tmp2].push_back(tmp1); // �ݴ�ε� push
	}
	for (int i = 1; i <= n; i++)
	{
		if (visit[i]) continue;
		if (vc[i].empty()) // ȥ�� �ִ� �����
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