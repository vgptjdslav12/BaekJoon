#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int memo[50001];

int main()
{
	int a;
	cin >> a;
	memo[1] = 1;
	for (int i = 1; i <= a; i++)
	{
		memo[i] = memo[1] + memo[i - 1];
		for (int j = 2; j * j <= i; j++)
		{
			memo[i] = min(memo[i], 1 + memo[i - j * j]);
		}
	}
	cout << memo[a];
	return 0;
}