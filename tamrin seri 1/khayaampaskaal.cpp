#include <iostream>
using namespace std;
int main()
{
    int i, j, n, x(0), temp1(1), temp2(1), temp3(1), r, alfa;
    cin >> n;
    for ( i = n; i >= 1; i--)
    {
        r = 0;
        for ( j = 1; j <= n; j++)
        {
            if ( i <= j )
            {
                if ( x == 0 ) 
                {
                    cout << "1 "; r++;
                }
                else if ( r == 0 || (x-r) == 0)
                {
                    cout << "1 "; r++;
                }
                else
                {
                    for ( int a = 1; a <= x; a++)
                    {
                        temp1 = temp1 * a;
                    }
                    for ( int a = 1; a <= r; a++)
                    {
                        temp2 = temp2 * a;
                    }
                    for ( int a = 1; a <= (x-r); a++)
                    {
                        temp3 = temp3 * a;
                    }
                    alfa = temp1 / ( temp2 * temp3);
                    cout << alfa << " ";
                    temp1 = 1;
                    temp2 = 1;
                    temp3 = 1;
                    r++;
                }
            }
        }
        x++;
        cout << endl;
    }
    return 0;
}