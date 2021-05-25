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
			cout << str[i]; // 알파벳일 경우 바로 출력
		}
		else if (str[i] == '(')
		{
			st.push(str[i]); // ( 를 받으면 stack 에 push
		}
		else if (str[i] == '*' || str[i] == '/') // 우선 순위가 1인 연산자의 경우
		{
			while (!st.empty() && (st.top() == '*' || st.top() == '/')) 
			{
				cout << st.top(); // stack 에 남아잇는 우선 순위 1 인 연산자 전부 출력
				st.pop();
			}
			st.push(str[i]); // 해당 연산자 stack 에 push
		}
		else if (str[i] == '+' || str[i] == '-') // 우선 순위가 0 인 연산자의 경우
		{
			while (!st.empty() && st.top() != '(') // 우선순위를 부여하는 ( 가 나올때 까지 연산자 전부 출력
			{
				cout << st.top();
				st.pop();
			}
			st.push(str[i]); // 해당 연산자 stack 에 push
		}
		else if (str[i] == ')')
		{
			while (!st.empty() && st.top() != '(')
			{
				cout << st.top(); // ( 가 나올 때 까지 stack 에 있는 연산자 출력
				st.pop();
			}
			st.pop(); // ( pop
		}
	}

	while (!st.empty()) // 남은 연산자 전부 출력
	{
		cout << st.top();
		st.pop();
	}

	return 0;
}
*/