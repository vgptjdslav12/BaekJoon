//#include <iostream>
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	int n, m, count = 0;
//	string s;
//	cin >> n >> m;
//	cin >> s;
//	for (int i = 0; i < s.length(); i++)
//	{
//		if (s[i + 1] == 'O' && s[i + 2] == 'I')
//		{
//			int O = 0;
//			while (s[i] == 'I' && s[i + 1] == 'O')
//			{
//				i += 2;
//				O++;
//				if (s[i] == 'I' && O == n)
//				{
//					O--;
//					count++;
//				}
//			}
//		}
//	}
//	cout << count;
//
//	return 0;
//}