#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, s = 0, i = 1, x = 0, f = 1, r = 0, p;
    cin >> a >> b >> c;
    while ( a != 0)
    {
        d = a % 10;
        s += d * i;
        a = a / 10;
        i = i * b;
    }
    i = 1;
    while ( s != 0)
    {
        f = s % c;
        x += f * i;
        s = s / c;
        i = i * 10;
    }
    p = x;
    while (x != 0)
    {
        r = r * 10 + ( x % 10);
        x = x / 10;
    }
    if ( p == r) cout << "YES";
    else cout << "NO" << endl;
}
