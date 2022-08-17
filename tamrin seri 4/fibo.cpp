#include <iostream>
using namespace std;
void ShowFibNth(long int n, long int m)
{
    int t;
    t = n;
    cout << n << "\n";
    n = m - n;
    m = t;
    if ( n == 1)
    {
        cout << 1 << "\n" << 1;
        return;
    }
    ShowFibNth( n, m);
}
int main()
{
    long int n, m;
    cin >> n >> m;
    if ( n == 1 && m ==1) cout << 1;
    else if ( n == 1 && m == 2) cout << 1 << "\n" << 1;
    else ShowFibNth( n, m);  
}