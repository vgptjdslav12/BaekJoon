/*#include <iostream>

using namespace std;
int n, m;
int arr[50][50];
bool is_visit[50][50];
int dx[] = { -1,0,0,1 };
int dy[] = { 0,1,-1,0 };

void DFS(int x, int y)
{
	int xtemp, ytemp;
	is_visit[x][y] = true;
	for (int i = 0; i < 4; i++)
	{
		xtemp = x + dx[i];
		ytemp = y + dy[i];
		if (xtemp < 0 || xtemp >= n || ytemp < 0 || ytemp >= m) continue;
		if (is_visit[xtemp][ytemp] == false && arr[xtemp][ytemp] == 1)
		{
			DFS(xtemp, ytemp);
		}
	}
}

void reset()
{
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			is_visit[i][j] = false;
			arr[i][j] = 0;
		}
	}
}

int main()
{
	int t, k, x, y, count;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		reset();
		count = 0;
		cin >> n >> m >> k;
		for (int j = 0; j < k; j++)
		{
			cin >> x >> y;
			arr[x][y] = 1;
		}
		for (int j = 0; j < n; j++)
		{
			for (int z = 0; z < m; z++)
			{
				if (arr[j][z] == 1 && !is_visit[j][z])
				{
					DFS(j, z);
					count++;
				}
			}
		}
		cout << count << "\n";
	}

	return 0;
}
*/