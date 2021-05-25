/*#include <iostream>
#include <queue>

using namespace std;

#define MAX 100000
queue <pair<int,int>> que;
bool visit[MAX + 1] = { false, };

bool valid(int n)
{
	if (n < 0 || n>MAX || visit[n]) return false;
	return true;
}

int func(int n, int k)
{
	int data, depth;
	while (!que.empty())
	{
		data = que.front().first;
		depth = que.front().second;
		que.pop();
		if (data == k)
		{
			return depth;
		}
		if (valid(data - 1))
		{
			visit[data - 1] = true;
			que.push(make_pair(data - 1, depth + 1));
		}
		if (valid(data + 1))
		{
			visit[data + 1] = true;
			que.push(make_pair(data + 1, depth + 1));
		}
		if (valid(data * 2))
		{
			visit[data * 2] = true;
			que.push(make_pair(data * 2, depth + 1));
		}
	}
}

int main()
{
	int n, k;
	cin >> n >> k;

	que.push(make_pair(n, 0));
	visit[n] = true;

	cout << func(n,k);

	return 0;
} 
*/