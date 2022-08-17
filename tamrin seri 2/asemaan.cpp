#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, m, t = 0, i, j;
    cin >> n >> m;
    char a[n][m];
    char b = '*';
    for ( i = 0; i < n; i++) 
    {
        for ( j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if ( a[i][j] == b )
            {
                t++;
            }
        }
    }  
    cout << t;
}
