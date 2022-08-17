#include <iostream>
#include <string.h>
using namespace std;
int tedad ( char a1[20])
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0, w = 0, x = 0, y = 0, z = 0, j1, m1 = 0, count;
    while ( a1[m1] != 0) m1++;
    for ( j1 = 0; j1 < m1; j1++)
    {
        if ( a1[j1] == 'a') a = 1;
        else if ( a1[j1] == 'b') b = 1;
        else if ( a1[j1] == 'c') c = 1;
        else if ( a1[j1] == 'd') d = 1;
        else if ( a1[j1] == 'e') e = 1;
        else if ( a1[j1] == 'f') f = 1;
        else if ( a1[j1] == 'g') g = 1;
        else if ( a1[j1] == 'h') h = 1;
        else if ( a1[j1] == 'i') i = 1;
        else if ( a1[j1] == 'j') j = 1;
        else if ( a1[j1] == 'k') k = 1;
        else if ( a1[j1] == 'l') l = 1;
        else if ( a1[j1] == 'm') m = 1;
        else if ( a1[j1] == 'n') n = 1;
        else if ( a1[j1] == 'o') o = 1;
        else if ( a1[j1] == 'p') p = 1;
        else if ( a1[j1] == 'q') q = 1;
        else if ( a1[j1] == 'r') r = 1;
        else if ( a1[j1] == 's') s = 1;
        else if ( a1[j1] == 't') t = 1;
        else if ( a1[j1] == 'u') u = 1;
        else if ( a1[j1] == 'v') v = 1;
        else if ( a1[j1] == 'w') w = 1;
        else if ( a1[j1] == 'x') x = 1;
        else if ( a1[j1] == 'y') y = 1;
        else if ( a1[j1] == 'z') z = 1;
    }
    count = a + b + c + d + e + f + g + h + i + j + k + l + m + n + o + p + q + r + s + t + u + v + w + x + y + z;
    return count;
}
int main()
{
    int n, i = 0, max = 0, count;
    cin >> n;
    char a1[20];
    while ( i < n)
    {
        cin >> a1;
        count = tedad ( a1);
        if ( count > max) max = count;
        i++;
    }
    cout << max;
}