#include <iostream>
using namespace std;
int main()
{
    int n[1000], k = 0, b[1000], i = 0;
    while ( i < 1000)
    {
        cin >> n[i];
        if ( n[i] == 0) break;
        b[k] = n[i];
        k++;
        i++;
    }
    k = k-1;
    while ( k != -1)
    {
        cout << b[k] << "\n";
        k--;
    }  
}