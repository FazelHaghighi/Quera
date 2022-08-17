#include <iostream>
using namespace std;
int main()
{
    char a[100];
    for ( int i = 0; i < 100; i++)
    {
        a[i] = '@';
    }
    cin >> a;
    for ( int i = 0; i < 100; i++)
    {
        switch ( a[i])
        {
            case '0':
            cout << "0:\n";
            break;
            case '1':
            cout << "1: 1\n";
            break;
            case '2':
            cout << "2: 22\n";
            break;
            case '3':
            cout << "3: 333\n";
            break;
            case '4':
            cout << "4: 4444\n";
            break;
            case '5':
            cout << "5: 55555\n";
            break;
            case '6':
            cout << "6: 666666\n";
            break;
            case '7':
            cout << "7: 7777777\n";
            break;
            case '8':
            cout << "8: 88888888\n";
            break;
            case '9':
            cout << "9: 999999999\n";
            break;
        }
    }   
}