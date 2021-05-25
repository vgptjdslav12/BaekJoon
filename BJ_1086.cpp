#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str;
	int count = 0;
	getline(cin, str);
	if (str.compare(" ") == 0) // 공백만 들어오는 경우
	{
		cout << 0;
		return 0;
	}
	for (int i = 0; i < str.length(); i++)
	{
		if (str.at(i) == ' ') // 공백이 감지 되면
		{
			if (i == 0) continue; // 맨 처음 일 경우 스킵
			if (i == str.length() - 1) break; // 맨 마지막 일 경우 스킵
			count++; // 그 외 count ++
		}
	}
	cout << ++count; // 공백 + 1 개 만큼 출력
	return 0;
}