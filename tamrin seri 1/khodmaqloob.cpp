#include <iostream>
using namespace std;
int main ()
{
    int n, t, r = 0;
    cin >> n;
    t = n;
    while (n != 0)
    {
        r = r * 10 + ( n % 10);
        n = n / 10;
    }
    if ( t == r) cout << "YES";
    else cout << "NO" << endl;
}

