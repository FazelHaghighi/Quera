#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a[5];
    int c = 0, i;
    for ( i = 0; i < 5; i++) 
    {
        cin >> a[i];
    }
    for ( i = 0; i < 5; i++) 
    {
        if ( a[i].find ( "MOLANA" ) != string::npos || a[i].find ( "HAFEZ" ) != string::npos) 
        {
            cout << i + 1 << " ";
            c += 1;
        }
    }
    if ( c == 0)
    {
        cout << "NOT FOUND!";
    }
}