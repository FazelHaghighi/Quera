#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j, s = 0;
    cin >> n >> m;
    int a[n][m];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for ( i = 1; i < (n-1); i++)
    {
        for ( j = 1; j < (m-1); j++)
        {
            if ( a[i][j] < a[i-1][j] && a[i][j] < a[i+1][j] && a[i][j] > a[i][j-1] && a[i][j] > a[i][j+1])
            {
                s += 1;
            }
            else if ( a[i][j] > a[i-1][j] && a[i][j] > a[i+1][j] && a[i][j] < a[i][j-1] && a[i][j] < a[i][j+1])
            {
                s += 1;
            }
        }
    }
    cout << s;
}