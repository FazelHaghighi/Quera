#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, m = 1, w, p;
    cin >> n;
    while ( i <= n)
    {
        cin >> w;
        if ( w > m)
        {
            m = w;
            p = i;
        }
        i++;
    }
    cout << p;
}
