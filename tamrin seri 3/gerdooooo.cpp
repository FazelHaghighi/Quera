#include <iostream>
using namespace std;
int ghadambozorg ( int n, int x, int y)
{
    int i = 0, j = 0;
       while ( x * i + y * j != n)
       {
           i++;
           if ( x * i + y * j > n)
           {
                if ( i >= 2)
                {
                   i = i - 2;
                   j++;
                }
           }
           if ( x * i + y * j > 100000) break;
       }
       if ( x * i + y * j == n ) cout << i << " " << j;
       else cout << -1;
}
int ghadamkoochik ( int n, int x, int y)
{
    int t = x;
    x = y;
    y = t;
    int i = 0, j = 0;
       while ( x * i + y * j != n)
       {
           i++;
           if ( x * i + y * j > n)
           {
                if ( i >= 2)
                {
                   i = i - 2;
                   j++;
                }
           }
           if ( x * i + y * j > 100000) break;
       }
       if ( x * i + y * j == n ) cout << j << " " << i;
       else cout << -1;
}
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    if ( x < y) ghadamkoochik ( n, x, y);
    else ghadambozorg ( n, x, y);
}