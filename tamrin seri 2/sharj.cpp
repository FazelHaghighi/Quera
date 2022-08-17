#include <iostream>
using namespace std;
int main()
{
    int i = 0, k, t = 0, x = 0;
    cin >> k;
    while ( i != k)
    {
        x = x + 1;
        t = t + x;
        i++;
    }
    cout << t;
}