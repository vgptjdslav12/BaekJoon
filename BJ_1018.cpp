/*#include <iostream>
#include <vector>
using namespace std;

int M, N, min = 65, itemp = 0; // 새로 색을 칠해야 하는 최악의 경우의 수 64 보다 큰 65 로 최솟값 초기화
bool flag = true;
string BF = "BWBWBWBW"; // 검은색이 맨 앞에 오는 경우
string WF = "WBWBWBWB"; // 하얀색이 맨 앞에 오는 경우
string temp;
vector <string> vc; // 전체 정사각형 판 

int func(int x, int y)
{
	int count = 0;
	for(int i = 0; i < 8;i++)
	{
		if (flag) { // 해당 열의 맨 앞 색이 White 인 경우
			flag = false; // 다음 열은 맨 앞 열이 Black
			if (vc.at(y + i).compare(WF) != 0) // 해당 열이 완전한 경우 탐색 하지 않음
			{
				for (int j = 0; j < 8; j++)
				{
					if (vc.at(y + i).at(x + j) != WF.at(j)) count++; // 색칠해야 하는 갯수 카운트
				}
			}
			continue;
		}
		if (!flag) { // 해당 열의 맨 앞 색이 Black 인 경우
			flag = true; // 다음 열은 맨 앞열이 White
			if (vc.at(y + i).compare(BF) != 0) // 해당 열이 완전한 경우 탐색 하지 않음
			{
				for (int j = 0; j < 8; j++)
				{
					if (vc.at(y + i).at(x + j) != BF.at(j)) count++; // 색칠해야 하는 갯수 카운트
				}
			}
			continue;
		}
	}
	return count;
}

int main()
{
	cin >> M >> N;
	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		vc.push_back(temp);
	}
	for (int i = 0; i <= M - 8; i++)
	{
		for (int j = 0; j <= N - 8; j++)
		{
			itemp = func(j, i);
			if (itemp > 32) itemp = 64 - itemp; // 새로 칠해야 하는 부분이 절반 이상이라면 체스판을 뒤집으면 값이 줄어듬
			::min = (::min > itemp) ? itemp : ::min; // 모든 경우를 탐색 한 후 count 가 가장 작은 경우를 min 에 입력
		}
	}
	cout << ::min;

	return 0;
}*/