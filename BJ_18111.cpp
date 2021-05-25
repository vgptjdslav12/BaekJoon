/*#include <iostream>
#include <algorithm>
using namespace std;
#define INF 99999999999999
#define H 257
 
int main()
{
	int arr[500][500] = { 0, };
	int n, m, b, height = 0;
	unsigned long long breakcount = 0, createcount = 0 ,time = INF;
	cin >> n >> m >> b;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < H; i++)
	{
		breakcount = 0, createcount = 0;
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < m; k++)
			{
				if (arr[j][k] > i) breakcount += arr[j][k] - i;
				if (arr[j][k] < i) createcount += i - arr[j][k];
			}
		}
		if (breakcount + b >= createcount)
		{
			if (time >= ((breakcount * 2) + createcount))
			{
				time = ((breakcount * 2) + createcount);
				height = i;
			}
		}
	}
	cout << time << " " << height;

	return 0;
}*/