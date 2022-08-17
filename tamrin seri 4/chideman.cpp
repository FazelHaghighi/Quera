#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, a[10000], s = 0, minute = 0;
    cin >> n;
    while ( i < n)
    {
        cin >> a[i];
        s += a[i];
        i++;
    }
    i--;
    s = ( s / n);
    while ( i >= 0)
    {
        if ( a[i] > s)
        {
            minute += ( a[i] - s);
        }
        else if ( a[i] < s)
        {
            minute += ( s - a[i]);
        }
        i--;
    }
    minute = ( minute / 2);
    cout << minute;
}