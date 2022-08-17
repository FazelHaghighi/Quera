#include <iostream>
using namespace std;
void bmm( long long int a, long long int b)
{
    long long int p;
    if ( a % b == 0)
    {
        cout << b;
        return;
    }
    p = a;
    a = b;
    b = (p % b);
    bmm( a, b);
}
int main()
{
    long long int a, b, t;
    cin >> a >> b;
    if ( a > b)
    {
        bmm( a, b);
    }
    else
    {
        t = b;
        b = a;
        a = t;
        bmm( a, b);
    }
}