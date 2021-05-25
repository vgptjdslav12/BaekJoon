/*#include <iostream>
#include <stack>
#include <string>
using namespace std;

string str;
stack<char> st;

int main()
{
	cin >> str;
	for (int i = 0; i < str.size(); i++)
	{
		
		if (str[i] > 64 && str[i] < 91)
		{
			cout << str[i]; // ���ĺ��� ��� �ٷ� ���
		}
		else if (str[i] == '(')
		{
			st.push(str[i]); // ( �� ������ stack �� push
		}
		else if (str[i] == '*' || str[i] == '/') // �켱 ������ 1�� �������� ���
		{
			while (!st.empty() && (st.top() == '*' || st.top() == '/')) 
			{
				cout << st.top(); // stack �� �����մ� �켱 ���� 1 �� ������ ���� ���
				st.pop();
			}
			st.push(str[i]); // �ش� ������ stack �� push
		}
		else if (str[i] == '+' || str[i] == '-') // �켱 ������ 0 �� �������� ���
		{
			while (!st.empty() && st.top() != '(') // �켱������ �ο��ϴ� ( �� ���ö� ���� ������ ���� ���
			{
				cout << st.top();
				st.pop();
			}
			st.push(str[i]); // �ش� ������ stack �� push
		}
		else if (str[i] == ')')
		{
			while (!st.empty() && st.top() != '(')
			{
				cout << st.top(); // ( �� ���� �� ���� stack �� �ִ� ������ ���
				st.pop();
			}
			st.pop(); // ( pop
		}
	}

	while (!st.empty()) // ���� ������ ���� ���
	{
		cout << st.top();
		st.pop();
	}

	return 0;
}
*/