#include <iostream>
using namespace std;
int main()
{
    int n, i, j, c = 0;
    cin >> n;
    char a[100000];
    for ( i = 0; i < 100000; i++)
    {
        a[i] = '@';
    }
    cin >> a;
    char b[100000];
    for ( i = 0; i < 100000; i++)
    {
        b[i] = '@';
    }
    cin >> b;
    i = 0;
    for ( j = 0; j < n; j++)
    {
        if ( a[i] != b[i])
    {
        c++;
        i++;
    }
    else i++;
    }
    cout << c;
}    