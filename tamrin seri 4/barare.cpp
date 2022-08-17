#include <iostream>
using namespace std;
int main()
{
    int a, b, c, x1, y1, x2, y2, x3, y3, s = 0, min, max, minute, money = 0;
    cin >> a >> b >> c >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ( x1 < x2 && x1 < x3) min = x1;
    else if ( x2 < x1 && x2 < x3) min = x2;
    else if ( x3 < x1 && x3 < x2) min = x3;
    if ( y1 > y2 && y1 > y3) max = y1;
    else if ( y2 > y1 && y2 > y3) max = y2;
    else if ( y3 > y1 && y3 > y2) max = y3;
    for ( minute = min; minute <= max; minute++)
    {
        s = 0;
        if ( minute >= x1 && minute < y1) s++;
        if ( minute >= x2 && minute < y2) s++;
        if ( minute >= x3 && minute < y3) s++;
        if ( s == 1) money += a;
        if ( s == 2) money += 2*b;
        if ( s == 3) money += 3*c;
    }
    cout << money;   
}