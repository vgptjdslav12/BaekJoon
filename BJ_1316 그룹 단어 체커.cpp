//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//int main()
//{
//	vector<string> vc;
//	int n , count = 0;
//	string temp, str;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		vc.push_back(temp);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		str = "";
//		temp = vc[i];
//		for (int j = 0; j < temp.length(); j++)
//		{
//			if (temp[j] != temp[j + 1]) 
//			{
//				if (str.find(temp[j]) != string::npos) 
//				{ 
//					count++; break;
//				}
//				str.append(1,temp[j]);
//			}
//		}
//	}
//	cout << n - count;
//}