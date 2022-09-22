#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int big = 0, index = 0, n, temp, s, head = 0;
	deque<int> vc;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		vc.push_back(temp);
	}
	cin >> s;
	while (s > 0)
	{
		if (s >= n) {
			for (int i = head; i < n; i++) {
				if (vc[i] > big) { big = vc[i]; index = i; }
			}
		}
		else {
			for (int i = head; i <= s; i++) {
				if (vc[i] > big) { big = vc[i]; index = i; }
			}
		}
		if (index == head) { head++; continue; }
		s -= index;
		vc.erase(vc.begin() + index);
		vc.push_front(big);
		head++;
		big = 0;
	}
	for (int i = 0; i < n; i++) {
		cout << vc[i] << " ";
	}
} 