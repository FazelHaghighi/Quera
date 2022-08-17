#include <iostream>
using namespace std;
int soton ( int x1, int x2)
{
    int i = 0;
    if ( x1 == x2)
    {
        i++;
    }
    return i;
}
int satr ( int y1, int y2)
{
    int j = 0;
    if ( y1 == y2)
    {
        j++;
    }
    return j;
}
int main()
{
    int x1, x2, y1, y2, Vertical, Horizontal;
    cin >> x1 >> y1 >> x2 >> y2;
    Vertical = soton ( x1, x2);
    Horizontal = satr (y1, y2);
    if ( Vertical == 1)
    {
        cout << "Vertical";
    }
    else if ( Horizontal == 1)
    {
        cout << "Horizontal";
    }
    else cout << "Try again";
}