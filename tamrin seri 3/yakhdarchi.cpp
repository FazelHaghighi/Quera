#include <iostream>
using namespace std;
int ice ( int n)
{
    int i = 0;
    if ( n < 0)
    {
        i++;
    }
    return i;
}
int steam ( int n)
{
    int j = 0;
    if ( n > 100)
    {
        j++;
    }
    return j;
}
int main ()
{
    int n, i, j;
    cin >> n;
    i = ice (n);
    j = steam (n);
    if ( i == 1) cout << "Ice";
    else if ( j == 1) cout << "Steam";
    else cout << "Water";
}