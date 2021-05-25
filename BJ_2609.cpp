/*#include <iostream>

using namespace std;

int Eucli(int a, int b)
{
	int r = a % b;

	if (r == 0) return b;

	else return Eucli(b, r);
}

int main()
{
	int a, b,gcd,lcm;

	cin >> a >> b;

	gcd = Eucli((a > b) ? a : b, (a < b) ? a : b);   

	lcm = (a * b) / gcd;

	cout << gcd << endl << lcm;

	return 0;
}
*/