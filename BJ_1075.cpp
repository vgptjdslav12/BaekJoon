/*
#include <iostream>
using namespace std;

int main()
{
	int n, f, temp;
	cin >> n >> f;
	n -= n % 100; // �� ���ڸ��� 00 ���� �ʱ�ȭ
	while (true)
	{
		if (n++ % f == 0) // �� ���ڸ� �� 00 ���� 1�� �÷����� �ݺ�
		{
			temp = (n % 100) - 1;
			break;
		}
	}
	if (temp < 10) // �տ� 0�� ������ ����ؾ� �ϴ� ���
	{
		cout << "0" << temp;
	}
	else cout << temp;
	
	return 0;
}
*/