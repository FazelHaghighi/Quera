#include <iostream>
using namespace std;
int main()
{
    int p, d;
    cin >> p >> d;
    while ( true)
    {
        if ( d % p >= 0 && d % p <= ( p /2))
    {
        cout << d; break;
    }
        else
        {
            d += d;
        }
    }
}