#include <iostream>
using namespace std;
int yaftan ( int a, int b)
{
    int c = 0, i, j, k = 0, l, d[200];
    for ( i = a + 1; i < b; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            if ( i % j == 0) c++;
        }
        if ( c == 2)
        {
            d[k] = i;
            k++;
        }
        c = 0;
    }
    l = k;
    k = 0;
    while ( k < l)
    {
        cout << d[k];
        if ( k < l - 1) cout << ",";
        k++;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    yaftan ( a, b);
}