#include <iostream>
using namespace std;
int main()
{
    int a1, b1, a2, b2, a3, b3, s = 0;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    if ( a1 <= b1) s += a1;
    else s += b1;
    if ( a2 <= b2) s += a2;
    else s += b2;
    if ( a3 <= b3) s += a3;
    else s += b3;
    cout << s;
}