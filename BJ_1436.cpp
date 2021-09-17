#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int temp = 666;
	string str;
	while (n)
	{
		str = to_string(temp);
		if (str.find("666") != string::npos) n--;
		temp++;
	}
	cout << --temp;
}	