#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int l;
	int r = 31, m = 1234567891;
	long long sum = 0;
	long long temp;
	string str;
	cin >> l;
	cin >> str;
	for (int i = 0; i < l; i++)
	{
		temp = 1;
		for (int j = 0; j < i; j++)
		{
			temp %= m;
			temp *= r;
		}
		sum += ((str[i] - 96) * (temp % m)) % m;
		sum %= m;
	}
	cout << sum;
}