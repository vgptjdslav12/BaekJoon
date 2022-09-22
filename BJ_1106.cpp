#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

#define INF 99999999

int memo[1101];
int n, c;
vector <tuple<int, int>> vc;

int dp(int index)
{
	int& ref = memo[index];
	if (index <= 0) { return 0; }
	if (ref != INF) { return ref; }
	for (auto i : vc) {
		if (get<0>(i) < index) {
			int temp = dp(index - get<0>(i)) + get<1>(i);
			if (ref > temp) {
				ref = temp;
			}
		}
		else {
			if (ref > get<1>(i)) {
				ref = get<1>(i);
			}
		}
	}
	return ref;
}

int main()
{
	int a, b, answer;
	cin >> c >> n;
	fill_n(memo, 1101, INF);
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		vc.push_back(make_tuple(b, a));
	}
	answer = dp(c);

	cout << answer;
}