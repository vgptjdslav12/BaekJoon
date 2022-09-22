#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int parant[51];
vector<int> vc;
vector<vector<int>>party;

int fp(int i) // find parant
{
	if (i == parant[i]) return i;
	else {
		parant[i] = fp(parant[i]);
		return parant[i];
	}
}

void up(int a, int b) // union parant
{
	a = fp(a);
	b = fp(b);
	if (a == b) return;
	if (a == 0) parant[b] = a;
	else parant[a] = b;
}

int main()
{
	int n, m, t, temp, cnt = 0;
	bool flag = false;
	cin >> n >> m;
	for (int i = 0; i < n + 1; i++) {
		parant[i] = i;
	}
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> temp;
		parant[temp] = 0;
	}

	for (int i = 0; i < m; i++) { // input
		vector<int> tvc;
		cin >> t;
		for (int j = 0; j < t; j++) {
			cin >> temp;
			tvc.push_back(temp);
		}
		party.push_back(tvc);
		for (int j = 0; j < tvc.size() - 1; j++) {
			up(tvc[j], tvc[j + 1]);
		}
	}

	for (auto i : party) {
		cnt++;
		for (auto j : i) {
			if (fp(j) == 0) {
				cnt--;
				break;
			}
		}
	}

	cout << cnt;
}