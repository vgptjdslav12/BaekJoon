/*#include <iostream>
#include <set>
using namespace std;

int main()
{
	char ch;
	int t, k, temp;
	cin >> t;
	while (t--) // 테스트 케이스
	{
		cin >> k; // 횟수 지정
		multiset<int> ms; // 초기화(아예 새로 만들어 버리기~)
		for (int i = 0; i < k; i++)
		{
			cin >> ch >> temp;
			if (ch == 'I')
			{
				ms.insert(temp); // 삽입 set 은 insert 시 자동으로 정렬 시행.
			}
			else // 삭제
			{
				if (ms.empty()) // multiset 이 비었을경우
				{
					continue;
				}
				if (temp == 1) // 최댓값 을 삭제 해야하는 경우
				{
					auto it = ms.end(); // auto 를 쓰면 자동으로 자료형을 잡아준다
					it--; // set 의 end는 마지막 원소가 아닌 마지막 원소의 다음칸(아직 사용하지 않은) 칸을 return 해 준다.
					ms.erase(it);
				}
				else ms.erase(ms.begin()); // 최솟값을 삭제해야하는 경우 begin() 삭제 (오름차순으로 자동 정렬된다.)
			}
		}
		if (ms.empty()) cout << "EMPTY" << "\n"; // multiset 이 비었을 경우
		else // 그 외
		{
			auto it = ms.end();
			it--;
			cout << *it << " " << *ms.begin() << "\n";
		}
	}
	return 0;
}
*/