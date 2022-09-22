#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int pt, sb;
	string str;
	vector <char> vc;
	while(1)
	{
		getline(cin, str, '.');
		if (str == "\n") break;
		pt = 0; sb = 0;
		vector <char> vc;
		vc.push_back(' ');
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '(')
			{
				pt++; vc.push_back('('); //pt 갯수 증가, 배열에 ( 추가
			}
			if (str[i] == '[')
			{
				sb++; vc.push_back('['); //sb 갯수 증가, 배열에 [ 추가
			}
			if (str[i] == ')')
			{
				pt--; // pt 개수 감소 후 배열검증, 배열과 일치하지 않으면 break --> 자동으로 no 출력됨
				if (vc.back() != '(') break;
				vc.pop_back();
			}
			if (str[i] == ']')
			{
				sb--;// sb 개수 감소 후 배열검증, 배열과 일치하지 않으면 break --> 자동으로 no 출력됨
				if (vc.back() != '[') break;
				vc.pop_back();
			}
		}
		if (pt == 0 && sb == 0) cout << "yes";
		else cout << "no";
		cout << endl;
	}

	return 0;
}