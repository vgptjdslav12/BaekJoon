/*#include <iostream>

using namespace std;

#define MAX 100000

int arr[MAX], heap_count = 0;

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void push(int data)
{
	
	arr[++heap_count] = data;

	int child = heap_count;
	int parent = child / 2;
	while (child > 1 && arr[parent] < arr[child])
	{
		swap(&arr[parent], &arr[child]);
		child = parent;
		parent = child / 2;
	}
}

int pop()
{
	if (heap_count == 0) return 0;
	int result = arr[1];

	swap(&arr[1], &arr[heap_count]);
	heap_count--;

	int parent = 1;
	int child = parent * 2;
	if (child + 1 <= heap_count)
	{
		child = (arr[child] > arr[child + 1]) ? child : child + 1;
	}

	while (child <= heap_count && arr[parent] < arr[child])
	{
		swap(&arr[parent], &arr[child]);

		parent = child;
		child = child * 2;
		if (child + 1 <= heap_count)
		{
			child = (arr[child] > arr[child + 1]) ? child : child + 1;
		}
	}

	return result;
}

int main()
{
	int n, k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (k == 0)
		{
			cout << pop() << "\n";
			continue;
		}
		push(k);
	}

	return 0;
}
*/