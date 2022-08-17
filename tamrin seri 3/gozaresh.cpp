#include <iostream>
using namespace std;
int main()
{
    int n, k, i = 0, c, p = 0;
    cin >> n >> k;
    while ( i < n)
    {
        cin >> c;
        p += c;
        i++;
    }
    if ( k <= p) cout << "YES";
    else cout << "NO";
}