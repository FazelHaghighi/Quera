#include <iostream>
using namespace std;
int main()
{
    unsigned long long n, r, t = 1, d;
    cin >> n;
    r = n;
    while ( r >= 10)
    {
        t = t * 10;
        r = r / 10;
    }
    while ( t > 0)
    {
        d = n / t;
        cout << d << ": ";
        for ( int i = 0; i < d; i++)
        cout << d;
        cout << endl;
        n = n % t;
        t = t / 10;
    }
}