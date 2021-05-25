/*
#include <iostream>

using namespace std;

long long memo[11] = { 0, };

int facto(long long a)
{
	long long temp = a;
	long long& ref = memo[a];
	if (a < 2) return 1;
	if (ref != 0)
	{
		return ref;
	}
	temp *= facto(--a);
	ref = temp;
	return temp;
}

long long func(long long n, long long k)
{
	long long temp;
	temp = facto(n) / (facto(k) * facto(n - k));
	return temp;
}

int main()
{
	long long n, k;
	cin >> n >> k;
	cout << func(n, k);

	return 0;
}
*/