#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, m =0;
    cin >> n;
    for ( int i = 1; i <= n; i++)
    {
        cin >> a;
        if ( m < a) m = a;
    }
    cout << m << endl;

}
