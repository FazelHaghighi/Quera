#include <iostream>
using namespace std;
int main()
{
    int n, r = 0, t, i = 0;
    cin >> n;
    while (n != 0)
    {
        r = r * 10 + ( n % 10);
        n = n / 10;
    }
    while ( r != 0)
    {
        t =  r % 10;
        cout << t << ": ";
        for ( int i = 0; i != t; i++)
        {
            cout << t;
        }
        cout << "\n";
        r = r / 10;
    }
}