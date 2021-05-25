//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> vc;
//vector<int> ans;
//
//void func(int m, int index)
//{
//	int tindex = index;
//	if (index >= vc.size()) return;
//	if (m == 1)
//	{
//		ans.push_back(vc[index]);
//		for (auto i : ans)
//		{
//			cout << i << " ";
//		}
//		cout << endl;
//		ans.pop_back();
//	}
//	else
//	{
//		while (index + m <= vc.size())
//		{
//			ans.push_back(vc[tindex]);
//			func(m - 1, ++index);
//			ans.pop_back();
//		}
//	}
//
//	return;
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i < n + 1; i++)
//	{
//		vc.push_back(i);
//	}
//	if (m == 1)
//	{
//		for (auto i : vc)
//		{
//			cout << i << endl;
//		}
//	}
//	else
//	{
//		for (int i = 0; i < n; i++)
//		{
//			func(m, i);
//		}
//	}
//
//	return 0;
//}