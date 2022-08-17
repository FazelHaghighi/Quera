#include <iostream>
using namespace std;
int main()
{
    int m, n, r = 0, p = 0, t, x;
    cin >> n >> m;
    t = n;
    x = m;
    while (n != 0)
    {
        r = r * 10 + ( n % 10);
        n = n / 10;
    }
    while (m != 0)
    {
        p = p * 10 + ( m % 10);
        m = m / 10;
    }
    if ( r > p) cout << x << " < " << t;
    else if ( r < p) cout << t << " < " << x;
    else if ( r = p) cout << t << " = " << x;
}