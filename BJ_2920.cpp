/*#include <iostream>
using namespace std;

int main()
{
	int arr[8];
	bool asc = true;
	bool des = true;
	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= 8; i++)
	{
		if (i == arr[i-1] && asc) asc = true; // ascending 인지 확인하는 부분 , ascending 의 연속성을 확인하기 위해서 asc 가 항상 true 인지 판별
		else asc = false;
	}
	for (int i = 0; i < 8; i++)
	{
		if (8 - i == arr[i] && des) des = true; // descending 인지 확인하는 부분 , desscending 의 연속성을 확인하기 위해서 des 가 항상 true 인지 판별
		else des = false;
	}
	if (asc) 
	{
		cout << "ascending"; 
		return 0; 
	}
	if (des)
	{
		cout << "descending";
		return 0;
	}
	cout << "mixed"; // 위의 두 경우에 해당하지 않는 경우 모두 mixed
	return 0;
}*/