#include <iostream>
using namespace std;
int miz ( int n, int k)
{
    int p = 1 + k, i = 1;
    while( p != 1)
    {
        if ( p <= n)
        {
            p += k;
            i++;
        }
        else
        {
            p = p - n;
        }
    }
    return i;
}
int main()
{
    int n, k, i;
    cin >> n >> k;
    i = miz ( n, k);
    cout << i;
}
