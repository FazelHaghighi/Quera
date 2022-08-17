#include <iostream>
using namespace std;
int main()
{
    unsigned long k, n, i =0, j, m = 1000000000, l, q = 1;
    cin >> k >> n;
    j = k;
    unsigned long a[n];
    while ( i < k)
    {
        cin >> a[i];
        if ( a[i] < m) m = a[i];
        i++;
    }
    l = i + 1;
    i = 0;
    while ( n - j >= 0)
    {
        while ( a[i] != q)
        {
            if ( i == k) break;
            i++;
        }
        if ( a[i] == q)
        {
            q++;
        }
        else
        {
            a[l] = q;
            l++;
        }
        q = 1;
        j++;
        i = (n - j);
    }
    cout << a[n];
}