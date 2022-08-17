#include <iostream>
using namespace std;
int main()
{
    int a, b, l, x = 0, i;
    cin >> a >> b >> l;
    for ( i = 1; i <= l; i++)
    {
        if ( i % 2 != 0)
        {
            x = x + a;
        }
        else
        {
            x = x + b;
        }
    }
    cout << x;
}