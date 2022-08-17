#include <iostream>
using namespace std;
int main()
{
    char a[6];
    int r = 0, g = 0, y = 0, i;
    cin >> a;
    for ( i=0; i <= 4; i++)
    {
        if ((int) a[i] == (int) 'R' || (int) a[i] == (int) 'r')
        r++;
        else if ((int) a[i] == (int) 'G' || (int) a[i] == (int) 'g')
        g++;
        else if ((int) a[i] == (int) 'Y' || (int) a[i] == (int) 'y')
        y++;
    }
    if ( ( r == 5 || y == 5) || ( r >= 3 ) || ( r >=2 && y >= 2) || ( r == 1 && y == 4) ) cout << "nakhor lite";
    else cout << "rahat baash";
}