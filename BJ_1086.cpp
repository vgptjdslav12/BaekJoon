#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int count = 0;
	getline(cin, str);
	if (str.compare(" ") == 0) // ���鸸 ������ ���
	{
		cout << 0;
		return 0;
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (str.at(i) == ' ') // ������ ���� �Ǹ�
		{
			if (i == 0) continue; // �� ó�� �� ��� ��ŵ
			if (i == str.length() - 1) break; // �� ������ �� ��� ��ŵ
			count++; // �� �� count ++
		}
	}
	cout << ++count; // ���� + 1 �� ��ŭ ���
	return 0;
}