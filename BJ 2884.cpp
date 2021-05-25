#include <iostream>
using namespace std;
int H;
int M;
void func()
{
	M -= 45;
	if (M < 0)
	{
		H -= 1;
		M += 60;
	}
	if (H < 0)
	{
		H += 24;
	}
	cout << H << " " << M;
}

int main()
{
	cin >> H;
	cin >> M;
	::func();

	return 0;
}