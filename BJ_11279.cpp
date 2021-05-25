/*#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue <int,vector<int>,less<>> pq;
	int n, x;
	cin >> n;
	while (n--)
	{
		cin >> x;
		if (x == 0)
		{
			if (pq.empty()) cout << 0 << "\n";
			else
			{
				cout << pq.top() << "\n";
				pq.pop();
			}

		}
		else
		{
			pq.push(x);
		}
	}

	return 0;
}
*/