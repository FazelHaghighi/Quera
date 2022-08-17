#include <iostream>
using namespace std;
int main ()
{
    unsigned long n, r = 0;
    cin >> n;
    while ( n > 9)
    {   r = 0;
         while (n != 0)
        {
            r = r + ( n % 10);
            n = n / 10;
        }
        n = r;
    }
    cout << n;
}
