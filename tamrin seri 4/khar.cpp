#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, m, i, j, k, l = 0;
    cin >> n >> m;
    string a[1000][2], b[m], c[1000];
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= 1; j++)
        {
            cin >> a[i][j];
        }
    }
    for ( k = 0; k < m; k++)
    {
        cin >> b[k];
    }
    for ( k = 0; k < m; k++)
    {
        for ( i = 0; i < n; i++)
        {
            if ( b[k] == a[i][0])
            {
                cout << a[i][1] << " ";
                break;
            }
        }
        cout << "kachal! ";
    }
}