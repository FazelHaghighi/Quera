#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n, m, x, z;
    cin >> n >> m;
    x = (m*m);
    z = (n/x);
    cout << setprecision (2) << fixed << z << "\n";
    if ( z < 18.5) cout << "Underweight";
    else if ( z < 25) cout << "Normal";
    else if ( z < 30) cout << "Overweight";
    else if ( z >= 30) cout << "Obese";
}