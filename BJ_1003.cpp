/*#include <iostream>

using namespace std;

int memoz[41] = { 0, };
int memoo[41] = { 0, };

pair<int,int> operator+ (pair<int,int> a,pair<int,int> b)
{
    return make_pair(a.first + b.first, a.second + b.second);
}

pair<int,int> fibonacci(int n) 
{
    int& refz = memoz[n];
    int& refo = memoo[n];

    if (refz != 0 && refo != 0)
    {
        return make_pair(refz, refo);
    }
    if (n == 0) 
    {

        return make_pair(1,0);
    }

    if (n == 1) 
    {
        return make_pair(0, 1);
    }
    pair<int, int> temp = fibonacci(n - 1) + fibonacci(n - 2);
    refz = temp.first;
    refo = temp.second;
    return make_pair(refz, refo);
}

int main()
{
    int t, n;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        pair<int,int> temp = fibonacci(n);
        cout << temp.first << " " << temp.second << "\n";
    }

    return 0;
}
*/