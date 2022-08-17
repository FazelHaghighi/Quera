#include <iostream>
using namespace std;
int ja ( int r, int c)
{
    if ( c <= 10) cout << "Right ";
    else cout << "Left ";
    cout << 11 - r << " ";
    if ( c <= 10) cout << c;
    else cout << 21 - c;

}
int main()
{
    int r, c;
    cin >> r >> c;
    ja ( r, c);
}