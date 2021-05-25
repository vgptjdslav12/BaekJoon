#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cin >> a >> b;
    temp = a % b;
    cout << a / b << endl;
    cout << temp;

    return 0;
}