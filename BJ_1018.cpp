/*#include <iostream>
#include <vector>
using namespace std;

int M, N, min = 65, itemp = 0; // ���� ���� ĥ�ؾ� �ϴ� �־��� ����� �� 64 ���� ū 65 �� �ּڰ� �ʱ�ȭ
bool flag = true;
string BF = "BWBWBWBW"; // �������� �� �տ� ���� ���
string WF = "WBWBWBWB"; // �Ͼ���� �� �տ� ���� ���
string temp;
vector <string> vc; // ��ü ���簢�� �� 

int func(int x, int y)
{
	int count = 0;
	for(int i = 0; i < 8;i++)
	{
		if (flag) { // �ش� ���� �� �� ���� White �� ���
			flag = false; // ���� ���� �� �� ���� Black
			if (vc.at(y + i).compare(WF) != 0) // �ش� ���� ������ ��� Ž�� ���� ����
			{
				for (int j = 0; j < 8; j++)
				{
					if (vc.at(y + i).at(x + j) != WF.at(j)) count++; // ��ĥ�ؾ� �ϴ� ���� ī��Ʈ
				}
			}
			continue;
		}
		if (!flag) { // �ش� ���� �� �� ���� Black �� ���
			flag = true; // ���� ���� �� �տ��� White
			if (vc.at(y + i).compare(BF) != 0) // �ش� ���� ������ ��� Ž�� ���� ����
			{
				for (int j = 0; j < 8; j++)
				{
					if (vc.at(y + i).at(x + j) != BF.at(j)) count++; // ��ĥ�ؾ� �ϴ� ���� ī��Ʈ
				}
			}
			continue;
		}
	}
	return count;
}

int main()
{
	cin >> M >> N;
	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		vc.push_back(temp);
	}
	for (int i = 0; i <= M - 8; i++)
	{
		for (int j = 0; j <= N - 8; j++)
		{
			itemp = func(j, i);
			if (itemp > 32) itemp = 64 - itemp; // ���� ĥ�ؾ� �ϴ� �κ��� ���� �̻��̶�� ü������ �������� ���� �پ��
			::min = (::min > itemp) ? itemp : ::min; // ��� ��츦 Ž�� �� �� count �� ���� ���� ��츦 min �� �Է�
		}
	}
	cout << ::min;

	return 0;
}*/