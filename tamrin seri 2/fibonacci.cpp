#include <iostream>
using namespace std;
int main()
{
    int n, i, j, z = 1, a1 = 0, a2 = 1, next, k;
    cin >> n;
    int a[101];
    int b[k];
    for ( k = 0; k < 1; k++) b[k] = 0;
    for ( j = 0; j < 101; j++)
    {
        a[j] = a1;
        next = a1 + a2;
        a1 = a2;
        a2 = next;
    }
    j = 1;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j < 101; j++)
        {
            if ( z == a[j] ) 
        {
            b[k] = 1;
        }
        }
        j =1;
        if ( b[k] == 1)
        {
            cout << "+";
            z++;
        }
        else if ( b[k] == 0)
        {
            cout << "-";
            z++;
        }
        b[k] = 0;
    }
}