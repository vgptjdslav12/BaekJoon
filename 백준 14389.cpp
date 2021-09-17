#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	int M = 0;
	char cArray[10][25];
	int iSum = 0;
	int iTe = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 25; j++) {
			cArray[i][j] = '_';
		}
	}

	cin >> N >> M;
	if (1 <= N && 1 <= M &&(10 >= N && 25 >= M) {
		for (int i = 0; i < N; i++) {
			cin >> cArray[i];
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (cArray[i][j] == '4')
					cArray[i][j] = '.';
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (cArray[i][j] == '.' && cArray[i + 1][j] == '.' && cArray[i][j + 1] == '.' && cArray[i + 1][j + 1] == '.') {
					cArray[i][j] = '4';
					cArray[i][j + 1] = '4';
					cArray[i + 1][j] = '4';
					cArray[i + 1][j + 1] = '4';
				}
				else {
					continue;
				}
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (cArray[i][j] == '.') {
					cArray[i][j] = '1';
				}
				else {
					continue;
				}
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				switch (cArray[i][j]) {
				case '1':
					iTe = 1;
					break;
				case '4':
					iTe = 4;
					break;
				default:
					break;
				}
				iSum += iTe;
			}
		}
		cout << iSum;
		cout.flush();
	}

	return 0;
}