#include <iostream>
using namespace std;
int main()
{
    int n, t, b = 0, c, d = 1;
    cin >> n;
    t = n;
    while ( n > 0)
    {
        b += n % 10;
        n = n / 10;
    }
    int i = t, j;
    while ( true )
    {
        i++;
        c = 0;
        for ( j = 1; j <= i; j++)
        if ( i % j == 0) c++;
        if ( c == 2 && d == b)
        {
            cout << i;
            break;
        }
        else if ( c == 2) d++;
    }
}