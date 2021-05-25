/*#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int arr[100001];

void func(int n, int key)
{
	int left = 0;
	int right = n - 1;
	int mid;

	while ((right - left) >= 0)
	{
		mid = (left + right) / 2;

		if (arr[mid] == key)
		{
			printf("1\n");
			return;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	printf("0\n");
	return;
}

int main()
{
	int n, m, temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	sort(arr,arr+n);
	scanf("%d", &m);

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &temp);
		func(n, temp);
	}

	return 0;
}*/