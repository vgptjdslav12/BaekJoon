#include <iostream>
using namespace std;
int BOX[1000][1000];

int main()
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> BOX[i][j];
		}
	}
}