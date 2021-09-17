//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int main()
//{
//	vector<double> vc;
//	int n, m, max;
//	double sum = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> m;
//		vc.push_back(m);
//	}
//	sort(vc.begin(), vc.end());
//	max = vc.back();
//	for (int i = 0; i < n; i++)
//	{
//		vc[i] = (vc[i] / max) * 100;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		sum += vc[i];
//	}
//	sum = sum / n;
//	cout << sum;
//}