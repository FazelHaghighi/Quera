#include <iostream>
using namespace std;
int num ( int n)
{
    int i = 1, p =1, k = 0;
    while ( i <= n)
    {
        while ( p <= n)
        {
            if ( i % p == 0)
            {
                k++;
            }
            p++;
        }
        p = 1;
        i++;
    }
    return k;
}
int sum ( int n)
{
    int i = 1, p =1, s = 0;
    while ( i <= n)
    {
        while ( p <= n)
        {
            if ( i % p == 0)
            {
                s += p;
            }
            p++;
        }
        p = 1;
        i++;
    }
    return s;
}
int main ()
{
    int n, number, total;
    cin >> n;
    number = num (n);
    total = sum (n);
    cout << number << " " << total;
}