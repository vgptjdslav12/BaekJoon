/*#include <iostream>
#include <math.h>

using namespace std;
 
int func(int n, int r, int c)
{
	int temp;

	if (n == 0) return 0;

	if (r <= (pow(2, n - 1) - 1) && c <= (pow(2, n - 1) - 1))
	{
		temp = func(n - 1, r, c) + pow(2, n + n - 2) * 0;
	}
	else if (r > (pow(2, n - 1) - 1) && c <= (pow(2, n - 1) - 1))
	{
		temp = func(n - 1, r - (pow(2, n - 1)), c) + pow(2, n + n - 2) * 2;
	}
	else if (r <= (pow(2, n - 1) - 1) && c > (pow(2, n - 1) - 1))
	{
		temp = func(n - 1, r, c - (pow(2, n - 1))) + pow(2, n + n - 2) * 1;
	}
	else
	{
		temp = func(n - 1, r - (pow(2, n - 1)), c - (pow(2, n - 1))) + pow(2, n + n - 2) * 3;
	}

	return temp;
}

int main()
{
	int n, r, c;
	cin >> n >> r >> c;
	cout << func(n, r, c);

	return 0;
}
*/