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
		if (i == arr[i-1] && asc) asc = true; // ascending ���� Ȯ���ϴ� �κ� , ascending �� ���Ӽ��� Ȯ���ϱ� ���ؼ� asc �� �׻� true ���� �Ǻ�
		else asc = false;
	}
	for (int i = 0; i < 8; i++)
	{
		if (8 - i == arr[i] && des) des = true; // descending ���� Ȯ���ϴ� �κ� , desscending �� ���Ӽ��� Ȯ���ϱ� ���ؼ� des �� �׻� true ���� �Ǻ�
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
	cout << "mixed"; // ���� �� ��쿡 �ش����� �ʴ� ��� ��� mixed
	return 0;
}*/