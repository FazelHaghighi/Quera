#include <iostream>
#include <iomanip>
using namespace std;
double amaliat ( double x, double y, double w, double z)
{
    cout << "Sum : " << fixed << setprecision(6) << (x + y + w + z) << "\n";
    cout << "Average : " << fixed << setprecision(6) << ((x + y + w + z) / 4) << "\n";
    cout << "Product : " << fixed << setprecision(6) << (x * y * w * z) << "\n";
    if ( x > y && x > w && x > z)  cout << "MAX : " << fixed << setprecision(6) << x << "\n";
    else if ( y > x && y > w && y > z) cout << "MAX : " << fixed << setprecision(6) << y << "\n";
    else if ( w > x && w > y && w > z) cout << "MAX : " << fixed << setprecision(6) << w << "\n";
    else cout << "MAX : " << fixed << setprecision(6) << z << "\n";
    if ( x < y && x < w && x < z)  cout <<"MIN : " << fixed << setprecision(6) << x << "\n";
    else if ( y < x && y < w && y < z) cout << "MIN : " << fixed << setprecision(6) << y << "\n";
    else if ( w < x && w < y && w < z) cout << "MIN : " << fixed << setprecision(6) << w << "\n";
    else cout << "MIN : " << fixed << setprecision(6) << z << "\n";
}
int main()
{
    double x, y, w, z;
    cin >> x >> y >> w >> z;
    amaliat ( x, y, w, z);
}

