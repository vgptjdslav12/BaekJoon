/*#include <iostream>

using namespace std;

#define MAX 1001

bool memo[MAX];

void Eratos(int n)
{
	int temp = n * 2, i = 2;

	if (n >= MAX) return;

	if (memo[n] == false)
	{
		while (temp < MAX)
		{
			memo[temp] = true;
			temp = n * ++i;
		}
	}

	Eratos(++n);
	return;
}

int main()
{
	int arr[100];
	int n, count = 0;

	cin >> n;

	memo[1] = true;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	Eratos(2);

	for (int i = 0; i < n; i++)
	{
		if (memo[arr[i]] == false) count++;
	}
	cout << count;

	return 0;
}
*/