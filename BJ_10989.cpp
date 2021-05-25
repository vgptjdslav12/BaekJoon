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
	pivot = arr.at(left); // 배열의 가장 왼쪽값을 pivot 으로 선택
	// low 와 high 가 교차 할 때 까지 반복 (low<high)
	do 
	{
		// arr[low] 가 pivot 보다 작으면 계속 low 를 증가
		do
		{
			low++; // low는 left+1 에서 시작
		} while (low <= right && arr.at(low) < pivot);
		// arr[high] 가 pivot 보다 크면 계속 high 를 감소
		do
		{
			high--; // high 는 right 에서 시작 (high = right + 1 , high --)
		} while (high >= left && arr.at(high) > pivot);
		// 만약 low와 high 가 교차하지 않았으면 arr[low] 를 arr[high] 로 교환
		if (low < high)
		{
			SWAP(arr.at(low), arr.at(high), temp);
		}
	} while (low < high);

	// low와 high 가 교차했으면 반복문을 빠져나와 arr[left] 와 arr[high] 를 교환
	SWAP(arr.at(left), arr.at(high), temp);

	// pivot 의 위치인 high 반환
	return high;
}

void quick_sort(vector<int> arr, int left, int right)
{
	// 정렬할 범위가 2 개 이상의 데이터이면 (리스트의 크기가 0 이나 1이 아니면)
	if (left < right)
	{
		// partition 함수를 호출하여 pivot 을 기준으로 리스트를 비균등 분할(Divide
		int q = partition(arr, left, right); // q = pivot 의 위치

		// pivot 을 제외한 2 개의 부분 리스트를 대상으로 순환 호출
		quick_sort(arr, left, q - 1); // (left ~ pivot 바로 앞) 앞쪽 부분 리스트 정렬
		quick_sort(arr, q + 1, right); // (pivot 바로 뒤 ~ right) 뒤쪽 부분 리스트 정렬
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