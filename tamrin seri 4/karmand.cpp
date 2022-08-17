#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, i, j, s = 0, max = 1;
    string a[202][202];
    cin >> n;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= 1; j++)
        {
            cin >> a[i][j];
        }
    }
    for ( i = 0; i < n; i++)
    {
        s = 0;
        for ( j = 0; j < n; j++)
        {
            if ( a[i][0] == a[j][0]) s++;
        }
        if ( s > max) max = s;
    }
    cout << max;
}