#include <iostream>
using namespace std;
int main()
{
    int k, i = 0, j, s = 0, l;
    cin >> k;
    char a[k+1], b[10];
    cin >> a;
    for ( l = 0; l < k; l++)
    {
        cin >> b;
        j = 0;
        for ( j = 0; j < 10; j++)
        {
            if ( a[i] == b[j])
            {
                if ( j <= 4) s += j;
                else s += ( 9-j);
            }
        }
        i++;
    }
    cout << s;
}