#include <iostream>
using namespace std;

int main()
{
	int arr[26];
	fill_n(arr, 26, -1);
	string str;
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (arr[str[i] - 'a'] != -1) continue;
		arr[str[i] - 'a'] = i;
	}
	for (auto i : arr) {
		cout << i << " ";
	}
}