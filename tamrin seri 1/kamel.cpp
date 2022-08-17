#include <iostream>
using namespace std;
int main()
{
    int a, b, c, n;
    cin >> n;
    c = 0;
    for (int i = 1; i != n; i++)
{
    if (n % i == 0)
{
        c += i;
}
}
    if (c == n) cout << "YES" ;
    else cout<< "NO" << endl;
}