#include <iostream>
using namespace std;
int saat ( int a, int b)
{
    int h, m;
    if ( a == 0) cout << "00:";
    else
    {
        h = 12 - a;
        if ( h > 9) cout << h << ":";
        else cout << "0" << h << ":";
    }
    if ( b == 0) cout << "00";
    else
    {
        m = 60 - b;
        if ( m > 9) cout << m;
        else cout << "0" << m;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    saat ( a, b);
}