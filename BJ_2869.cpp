#include<iostream>
#include<math.h>
using namespace std;

int a, b, v, day;

int main()
{
	cin >> a >> b >> v;
	if (a >= v)
	{
		cout << 1;
		return 0;
	}
	if ((v - a) % (a - b) == 0)
	{
		day = (v - a) / (a - b);
	}

	else
	{
		day = (v - a) / (a - b) + 1;
	}
	day++;
	cout << day;
}