#include <iostream>
using namespace std;
int main()
{
    int t, i, x1, y1, x, y, k = 0;
    cin >> t;
    int a[t];
    for ( i = 0; i < t; i++)
    {
        cin >> x1 >> y1;
        if ( x1 == y1)
        {
            for ( x = 0; x < 5000; x++)
            {
                if ( x == x1)
                {
                    if ( x1 % 2 == 0)
                    {
                        a[k] = x1+y1;
                        k++;
                    }
                    else
                    {
                        a[k] = x1+y1-1;
                        k++;
                    }
                }
            }
        }
        else if ( x1 - y1 == 2)
        {
            for ( x = 2; x < 5000; x++)
            {
                for ( y = 0; y < 5000; y++)
                {
                    if ( x == x1 && y == y1)
                    {
                        if ( x1 % 2 == 0)
                        {
                            a[k] = x1+y1;
                            k++;
                        }
                        else
                        {
                            a[k] = x1+y1-1;
                            k++;
                        }
                    }
                }
            }

        }
        else
        {
            a[k] = -1;
            k++;
        }
    }
    for ( k = 0; k < t; k++)
    {
        cout << a[k] << "\n";
    }
}