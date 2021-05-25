/*
#include <iostream>
using namespace std;

int main()
{
	int n, f, temp;
	cin >> n >> f;
	n -= n % 100; // 뒤 두자리수 00 으로 초기화
	while (true)
	{
		if (n++ % f == 0) // 뒤 두자리 수 00 부터 1씩 올려가며 반복
		{
			temp = (n % 100) - 1;
			break;
		}
	}
	if (temp < 10) // 앞에 0을 붙혀서 출력해야 하는 경우
	{
		cout << "0" << temp;
	}
	else cout << temp;
	
	return 0;
}
*/