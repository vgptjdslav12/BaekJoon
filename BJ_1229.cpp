#include <iostream>
#include <vector>
using namespace std;

#define INF 99999999

long long memo[1000001];
vector<long long> vc;

void get_hex(int n)
{
	long long temp;
	vc.push_back(0);
	for (int i = 1; i < n + 1; i++) {
		temp = i * (2 * i - 1);
		if (temp <= n) {
			vc.push_back(temp);
			memo[temp] = 1;
		}
		else break;
	}
}

long long dfs(long long n)
{
	long long& ref = memo[n];
	if (ref != INF) return ref;
	for (auto i : vc) {
		if (i == 0) continue;
		if (i > n) break;
		ref = ref > dfs(n - i) + 1 ? dfs(n - i) + 1 : ref;
	}
	return ref;
}

int main() 
{
	fill_n(memo, 1000001, INF);
	memo[0] = 0; memo[1] = 1; memo[2] = 2; memo[3] = 3; memo[4] = 4; memo[5] = 5; memo[6] = 1;
	int n;
	cin >> n;
	get_hex(n);
	cout << dfs(n);
}