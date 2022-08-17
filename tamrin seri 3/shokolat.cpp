#include <iostream>
using namespace std;
int khordan ( int a, int c)
{
    int i = 0, j = 0, k = 0, l = 0;
    while ( true)
    {
        a -= 1;
        i++;
        if ( a == 0) break;
        c -= 1;
        j ++;
        if ( c == 0) break;
        a -= 1;
        k++;
        if ( a == 0) break;
        c -= 1;
        l++;
        if ( c == 0) break;
    }
    cout << i << " " <<  j << " " << k << " " << l;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    khordan ( a, c);
}