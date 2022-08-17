#include <iostream>
using namespace std;
int main()
{
    int n, i, t;
    cin >> n;
    for ( int i = 0; i != n; i++)
    {
        for ( int t = 0; t != n; t++)
        {
            if ( i == 0 || i == n-1 || t == 0 || t == n-1 ) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }
}