#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j, l, s = 0;
    cin >> n >> m;
    int a[n][n];
    for ( i = 0; i < n; i++) 
    {
        for ( j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for ( l = 0; l < m; l++)
    {
        cin >> i >> j;
        s += a[i-1][j-1];
    }
    cout << s;
}