#include <iostream>
#include <vector>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int>b)
{
	if (a.first < b.first) return a.second < b.second; // a�� b���� ��ġ�� ���� ��츸 ���
	return false; // �� �ܿ� �ѱ�
}

int main()
{
	vector <pair<int, int>> vc;
	int arr[50] = { 0, };
	int n, x, y;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		vc.push_back(make_pair(x, y));
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(cmp(vc[i],vc[j])) arr[i]++; // �� ���� ����, a�� b���� ���� ��� ī��Ʈ ����
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] + 1 << " "; //arr[i] �� �迭 ������ �й��� Ƚ�� + 1 �� ��ġ �����̴�.
	}
}