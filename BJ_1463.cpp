/*#include <iostream>

#define SIZE 1000000

using namespace std;

int memo[SIZE];

int func(int n, int count)
{
	int& ref = memo[n];
	int temp = count;
	if (ref != 0)
	{
		return ref;
	}
	if (n == 1) return 0;
	ref = SIZE + 1;
	if (n % 3 == 0)
	{
		count = func(n / 3, temp) + 1;
		ref = (ref > count) ? count : ref;
	}
	if (n % 2 == 0)
	{
		count = func(n / 2, temp) + 1;
		ref = (ref > count) ? count : ref;
	}
	count = func(n - 1, temp) + 1;
	ref = (ref > count) ? count : ref;
	return ref;
}

int main()
{
	int n;
	cin >> n;
	cout << func(n, 0);

	return 0;
}
*/