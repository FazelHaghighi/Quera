#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ( a*a == b*b + c*c)
    {
        cout << "YES" << endl; 
    }
    else if ( b*b == a*a + c*c)
    {
        cout << "YES" << endl;
    }
    else if ( c*c == a*a + b*b)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}