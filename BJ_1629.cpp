/*
#include <iostream>
using namespace std;

long long pow(long long a, long long b, long long c)
{
	if (b == 0) return 1;
	if (b == 0) return a;
	if (b % 2 == 0)
	{
		return (pow(a, b / 2, c) % c) * (pow(a, b / 2, c) % c);
	}
	else
	{
		return (pow(a, b - 1, c) % c) * (a % c);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	cout << (pow(a, b, c) % c);

	return 0;
}
*/