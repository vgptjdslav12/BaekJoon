include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long n;
	long long dice[6];
	long long m[3];
	long long sum;
	cin >> n;
	cin >> dice[0] >> dice[1] >> dice[2] >> dice[3] >> dice[4] >> dice[5];
	if (n == 1) {
		sort(dice, dice + 6);
		sum = dice[0] + dice[1] + dice[2] + dice[3] + dice[4];
	}
	else {
		dice[0] = min(dice[0], dice[5]);
		dice[1] = min(dice[1], dice[4]);
		dice[2] = min(dice[2], dice[3]);
		sort(dice, dice + 3);
		m[0] = ((4 * (n - 2) * (n - 1)) + ((n - 2) * (n - 2))) * dice[0];
		m[1] = (8 * n - 12) * (dice[0] + dice[1]);
		m[2] = 4 * (dice[0] + dice[1] + dice[2]);
		sum = m[0] + m[1] + m[2];
	}
	cout << sum;
}