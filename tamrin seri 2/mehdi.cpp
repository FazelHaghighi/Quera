#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, j, k, l, m, n, o = 0, p, q = 7, r, t, u = 0, v, x;
    string a[7], b[7], c[7], d[50], e[100];
    cin >> l;
    for ( i = 0; i < l; i++)
    {
        cin >> a[i];
        d[o] = a[i];
        o++;
    }
    r = i;
    i = 0;
    cin >> m;
    for ( j = 0; j < m; j++)
    {
        cin >> b[j];
        while ( i != r)
        {
            if ( a[i] != b[j])
            {
                d[o] = b[j];
                o++;
                for ( x = 2; x <= o; x++)
                {
                    if (d[o-1] == d[o-x])
                    {
                        d[o-1] = "";
                    }
                }
                x = 0;
            }
            i++;
        }
        i = 0;
    }
    while ( o >= 0)
    {
        e[u] = d[o];
        o--;
        u++;
    }
    v = u;
    o = 0;
    cin >> n;
    for ( k = 0; k < n; k++)
    {
        cin >> c[k];
        while ( o != v)
        {
            if ( d[o] != c[k])
            {
                e[u] = c[k];
                u++;
                for ( x = 2; x <= u; x++)
                {
                    if (e[u-1] == e[u-x])
                    {
                        e[u-1] = "";
                    }
                }
                x = 0;
            }
            o++;
        }
        o = 0;
    }
    while ( u >= 0)
    {
        if ( e[u] == "shanbe") q--;
        else if ( e[u] == "1shanbe") q--;
        else if ( e[u] == "2shanbe") q--;
        else if ( e[u] == "3shanbe") q--;
        else if ( e[u] == "4shanbe") q--;
        else if ( e[u] == "5shanbe") q--;
        else if ( e[u] == "jome") q--;
        u--;
    }
    cout << q;
}   