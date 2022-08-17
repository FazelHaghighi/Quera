#include <iostream>
using namespace std;
int main()
{
    int n, p = 1, i = 0, j = 0;
    cin >> n;
    while ( p <= n)
    {
        i++;
        p++;
        if ( p == n) break;
        if ( p > 5) j = -j;
        j++;
        p++;
        if ( p == n) break;
        i = -i;
        p++;
        if ( p == n) break;
        j = -j;
        p++;
        if ( p == n) break;
        i = -i;
    }
    cout << i << " " << j;
}