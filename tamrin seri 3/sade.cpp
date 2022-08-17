#include <iostream>
using namespace std;
int mr( int n)
{
    while ( n > 0)
    {
        cout << "man khoshghlab hastam" << "\n";
        n--;
    }
}
int main()
{
    int n;
    cin >> n;
    mr (n);
}