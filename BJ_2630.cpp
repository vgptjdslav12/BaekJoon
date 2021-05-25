/*#include <iostream>

using namespace std;

int arr[128][128];
int w_cnt = 0, b_cnt = 0;

void func(int n,int x,int y)
{
	int temp = 0;
	for (int i = x; i < x + n;i++)
	{
		for (int j = y; j < y + n;j++)
		{
			if (arr[i][j]) temp++;
		}
	}
	if (!temp) w_cnt++;
	else if (temp == n * n) b_cnt++;
	else
	{
		func(n / 2, x, y);
		func(n / 2, x + n / 2, y);
		func(n / 2, x, y + n / 2);
		func(n / 2, x + n / 2, y + n / 2);
	}
	return;
}

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	func(n, 0, 0);

	cout << w_cnt << "\n";
	cout << b_cnt << "\n";

	return 0;
}
*/