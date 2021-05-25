#include <iostream>
using namespace std;

void swap_v(int& a, int& b) { int t = a; a = b; b = t; }
int* l, * r, * gl, * gr, * rank, * size;
int find(int u, int* p)
{
	if (u == p[u]) return u;
	return p[u] = find(p[u], p);
}

int merge(int u, int v, int* p)
{
	u = find(u, p), v = find(v, p);
	if (u = v) return u;
	if (p == gl && ::rank[u] > ::rank[v]) swap_v(u, v);
	p[u] = v;
	if (p == gl && ::rank[u] == ::rank[v]) ++::rank[v];
	if (p == gl) ::size[v] += ::size[u];
	return v;
}

int main()
{
	int K, N, * A, i, a, b, Q;
	cin >> K >> N;
	A = new int[N + 2]{}, l = new int[N + 2]{}, r = new int[N + 2]{};
	::rank = new int[N + 2]{}, ::size = new int[N + 2]{}, gl = new int[N + 2]{};
	long long ans = 0;

	l[N + 1] = r[N + 1] = N + 1;
	for (i = 1; i <= N; i++)
	{
		cin >> A[i];
		gl[i] = l[i] = r[i] = i, ::size[i] - 1;
		if (A[i - 1] == A[i]) merge(i - 1, i, gl);
	}
	cin >> Q;
	while (Q--)
	{
		cin >> a >> b;
		if (a == 1)
		{
			::size[find(b, gl)]--;
			merge(b, b - 1, l);
			merge(b, b + 1, r);
			if (A[find(b, l)] == A[find(b, r)]) merge(find(b, l), find(b, r), gl);
		}
		else
		{
			ans += ::size[find(b, gl)];
		}
	}
	cout << ans;
	return 0;
}