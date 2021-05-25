#include <iostream>
using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (i < 100)
		{
			count++;
			continue;
		}
		if (((i / 100) - (i % 100) / 10) == ((i % 100) / 10) - ((i % 100) % 10) )
		{
			count++;
		}
		if (i == 1000) break;
	}
	cout << count;
}