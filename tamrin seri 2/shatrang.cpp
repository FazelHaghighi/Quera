#include <iostream>
using namespace std;
int main()
{
    int a[6], i;
    for ( i = 0; i < 6; i++) 
    {
        cin >> a[i];
    }
    a[0] = 1 - a[0];
    a[1] = 1 - a[1];
    a[2] = 2 - a[2];
    a[3] = 2 - a[3];
    a[4] = 2 - a[4];
    a[5] = 8 - a[5];
    for ( i = 0; i < 6; i++) 
    {
        cout << a[i] << " ";
    }
}