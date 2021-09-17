//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n, k, count = 0, index;
//	int arr[10];
//	cin >> n >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	index = n - 1;
//	while (k != 0)
//	{
//		if (arr[index] > k)
//		{
//			index--;
//			continue;
//		}
//		k -= arr[index];
//		count++;
//	}
//	cout << count;
//}