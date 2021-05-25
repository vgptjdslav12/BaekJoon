#include <iostream>
#include <memory.h>
using namespace std;

int64_t H, N;
int64_t memo[30][30];

int64_t add(int64_t x, int64_t y);

int64_t factorial(int64_t a)
{
	if (a == 0)
	{
		return 1;
	}
	return a * factorial(a - 1);
}

int64_t NOC(int64_t x, int64_t y)
{
	int64_t& ret = memo[x][y];
	if (ret != 0) return ret;
	ret = add(x, y - 1);
	memo[x][y - 1] = ret;
	return ret;
}


int64_t add(int64_t x, int64_t y)
{
	int64_t& ret = memo[x][y];
	if (ret != 0) return ret;
	if (y > x) return 0;
	if (x == 1) return 1;
	if (y == 1) return (ret += x);
	ret = add(x - 1, y) + add(x, y - 1);
	return ret;

}


int main()
{	
	memset(memo, 0, sizeof(int64_t) * 30);
	for (int i = 0; i < 30; i++)
	{
		memset(memo[i], 0, sizeof(int64_t)* 30);
	}
	cin >> H >> N;
	int64_t temp = (H > N) ? (H - N) : (N - H);
	if (temp == 0) {
		cout << 1;
	}
	else cout << NOC(temp,temp);
	return 0;
}