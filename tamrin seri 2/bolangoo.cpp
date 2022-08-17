#include <iostream>
using namespace std;
int main()
{
    int n, i = 0, j = 0, p;
    char a[20];
    cin >> a;
    while ((int) a[i] != 0) i++;
    p = i;
    while ( j != p)
    {
        for ( i = 0; i < p; i++)
        {
            cout << a[i];
        }
        cout << "\n";
        for ( i = j; i > -1; i--)
        {
            a[i] = a[i+1];
        }
        j++;
    }   
}