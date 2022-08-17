#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e;
	
	cin >> a;
    b = a % 10;
    c = a / 10;
    c = c % 10;
    d = a / 100;
    d = d % 10;
    e = a / 1000;

    cout << "saal:" << e << d << "\n";
    cout << "maah:" << c << b << endl;
}
