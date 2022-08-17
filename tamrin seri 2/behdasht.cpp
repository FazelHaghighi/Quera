#include <iostream>
using namespace std;
int main()
{
    int x, n, z;
    cin >> x >> n;
    if ( n == 0) cout << 20;
    else
    {
        if ( n == 7) cout << x;
        else
        {
            z = x - n;
            if ( z <= 0) cout << 0;
            else
            {
                cout << z;
            }
        }
    }    
}