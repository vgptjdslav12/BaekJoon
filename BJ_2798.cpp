/*#include <iostream>

using namespace std;

int main()
{
	int n, m, temp, jack = 0;
	int arr[100];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				temp = arr[i] + arr[j] + arr[k];
				if (temp <= m && temp > jack) jack = temp;
			}
		}
	}
	cout << jack;
}
*/