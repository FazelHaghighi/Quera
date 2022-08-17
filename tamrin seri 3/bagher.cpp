#include <iostream>
using namespace std;
int mosalas( int x, int y, int z)
{
    int i = 0;
    if ( x != 0 && y != 0 && z != 0 && x + y + z == 180)
    {
        i++;
    }
    return i;
}
int main()
{
    int x, y, z, i;
    cin >> x >> y >> z;
    i =  mosalas( x, y, z);
    if ( i == 1) cout << "Yes";
    else cout << "No";
}