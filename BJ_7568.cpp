#include <iostream>
#include <vector>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int>b)
{
	if (a.first < b.first) return a.second < b.second; // a가 b보다 덩치가 작은 경우만 계산
	return false; // 그 외엔 넘김
}

int main()
{
	vector <pair<int, int>> vc;
	int arr[50] = { 0, };
	int n, x, y;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		vc.push_back(make_pair(x, y));
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(cmp(vc[i],vc[j])) arr[i]++; // 비교 연산 실행, a가 b보다 작은 경우 카운트 증가
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] + 1 << " "; //arr[i] 가 배열 내에서 패배한 횟수 + 1 이 덩치 순위이다.
	}
}