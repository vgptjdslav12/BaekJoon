#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	string temp, boom;
	vector<char> vc;
	bool flag;
	cin >> temp;
	cin >> boom;
	int len = boom.size();
	for (int i = 0; i < temp.size(); i++) {
		flag = false;
		vc.push_back(temp[i]);
		if (vc.back() == boom[len - 1]) {
			if (vc.size() < len) {
				continue;
			}
			else {
				for (int j = 0; j < len; j++) {
					if (vc[vc.size() - len + j] != boom[j]) {
						flag = true;
						break;
					}
				}
				if (!flag) {
					for (auto j : boom) {
						vc.pop_back();
					}
				}
			}
		}
	}
	if (vc.size() == 0) cout << "FRULA";
	else {
		for (auto i : vc) {
			cout << i;
		}
	}
}