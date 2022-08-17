#include <iostream>
using namespace std;
int main()
{
    double long n, k, i;
    cin >> n >> k;
    for ( i =0; i < k; i++)
    {
        n = n /2;
    }
    if ( n < 0 && (int) n != n) n -= 1;
    cout << (int)n;
}
 