/*#include <iostream>
#include <set>
using namespace std;

int main()
{
	char ch;
	int t, k, temp;
	cin >> t;
	while (t--) // �׽�Ʈ ���̽�
	{
		cin >> k; // Ƚ�� ����
		multiset<int> ms; // �ʱ�ȭ(�ƿ� ���� ����� ������~)
		for (int i = 0; i < k; i++)
		{
			cin >> ch >> temp;
			if (ch == 'I')
			{
				ms.insert(temp); // ���� set �� insert �� �ڵ����� ���� ����.
			}
			else // ����
			{
				if (ms.empty()) // multiset �� ��������
				{
					continue;
				}
				if (temp == 1) // �ִ� �� ���� �ؾ��ϴ� ���
				{
					auto it = ms.end(); // auto �� ���� �ڵ����� �ڷ����� ����ش�
					it--; // set �� end�� ������ ���Ұ� �ƴ� ������ ������ ����ĭ(���� ������� ����) ĭ�� return �� �ش�.
					ms.erase(it);
				}
				else ms.erase(ms.begin()); // �ּڰ��� �����ؾ��ϴ� ��� begin() ���� (������������ �ڵ� ���ĵȴ�.)
			}
		}
		if (ms.empty()) cout << "EMPTY" << "\n"; // multiset �� ����� ���
		else // �� ��
		{
			auto it = ms.end();
			it--;
			cout << *it << " " << *ms.begin() << "\n";
		}
	}
	return 0;
}
*/