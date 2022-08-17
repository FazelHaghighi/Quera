#include <iostream>
using namespace std;
int tool ( unsigned long x1, unsigned long x2, unsigned long x3)
{
    unsigned long x4;
    if ( x1 == x2)
    {
        x4 = x3;
    }
    else if ( x1 == x3)
    {
        x4 = x2;
    }
    else x4 = x1;
    return x4;
}
int arz ( unsigned long y1, unsigned long y2, unsigned long y3)
{
    unsigned long y4;
    if ( y1 == y2)
    {
        y4 = y3;
    }
    else if ( y1 == y3)
    {
        y4 = y2;
    }
    else y4 = y1;
    return y4;
}
int main()
{
    unsigned long x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    x4 = tool ( x1, x2, x3);
    y4 = arz ( y1, y2, y3);
    cout << x4 << " " << y4;
}