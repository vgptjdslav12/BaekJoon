#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;
int arr[10001];

/* #define MAX 10000000
#define SWAP(x,y,temp) ( (temp) = (x), (x) = (y), (y)=(temp) )

int partition(vector<int> arr, int left, int right)
{
	int pivot, temp;
	int low, high;

	low = left;
	high = right + 1;
	pivot = arr.at(left); // �迭�� ���� ���ʰ��� pivot ���� ����
	// low �� high �� ���� �� �� ���� �ݺ� (low<high)
	do 
	{
		// arr[low] �� pivot ���� ������ ��� low �� ����
		do
		{
			low++; // low�� left+1 ���� ����
		} while (low <= right && arr.at(low) < pivot);
		// arr[high] �� pivot ���� ũ�� ��� high �� ����
		do
		{
			high--; // high �� right ���� ���� (high = right + 1 , high --)
		} while (high >= left && arr.at(high) > pivot);
		// ���� low�� high �� �������� �ʾ����� arr[low] �� arr[high] �� ��ȯ
		if (low < high)
		{
			SWAP(arr.at(low), arr.at(high), temp);
		}
	} while (low < high);

	// low�� high �� ���������� �ݺ����� �������� arr[left] �� arr[high] �� ��ȯ
	SWAP(arr.at(left), arr.at(high), temp);

	// pivot �� ��ġ�� high ��ȯ
	return high;
}

void quick_sort(vector<int> arr, int left, int right)
{
	// ������ ������ 2 �� �̻��� �������̸� (����Ʈ�� ũ�Ⱑ 0 �̳� 1�� �ƴϸ�)
	if (left < right)
	{
		// partition �Լ��� ȣ���Ͽ� pivot �� �������� ����Ʈ�� ��յ� ����(Divide
		int q = partition(arr, left, right); // q = pivot �� ��ġ

		// pivot �� ������ 2 ���� �κ� ����Ʈ�� ������� ��ȯ ȣ��
		quick_sort(arr, left, q - 1); // (left ~ pivot �ٷ� ��) ���� �κ� ����Ʈ ����
		quick_sort(arr, q + 1, right); // (pivot �ٷ� �� ~ right) ���� �κ� ����Ʈ ����
	}
} */


int main()
{
	int n;
	int temp;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		arr[temp]++;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			printf("%d \n", i);
		}
	}
	return 0;
}