/*#include <iostream>
using namespace std;

int memo[1001] = { 0, };

int func(int n)
{
	int& ref = memo[n];
	if (ref) return ref;
	ref = ((func(n - 1) + (func(n - 2))) % 10007);
	return ref;
}

int main()
{
	int n;
	cin >> n;
	memo[1] = 1;
	memo[2] = 2;

	cout << func(n);
	return 0; 
}
*/