#include <iostream>
using namespace std;
int main()
{
    unsigned long  n, s, k, q, i = 0, p = 0, l = 0, m;
    cin >> n;
    unsigned long a[n], b[n];
    while ( i < n)
    {
        cin >> a[i];
        i++;
    }
    i = 0;
    cin >> q;
    while ( q > 0)
    {
        cin >> s >> k;
        p = a[s-1];
        while ( i <= (( n - s) / k))
        {
            p += a[s+k-1];
            k += k;
            i++;
        }
        b[l] = p;
        l++;
        i = 0;
        p = 0;
        q--;
    }
    m = l;
    b[l-1] += a[n-1];
    l = 0;
    while ( l < m)
    {
        cout << b[l] << "\n";
        l++;
    }
}