#include <iostream>
using namespace std;
int main()
{
    int n, k, i, s = 0, j = 0, x;
    cin >> n >> k;
    for ( i = 0; i <= (n - 1); i++)
    {
        cin >> x;
        s += x;
    }
    while ( s != k)
    {
        s = s - k;
        j++;
        if ( s < 0)
        {
            s = k;
            j--;
        }
    }
    j++;
    cout << ( n - j);
}