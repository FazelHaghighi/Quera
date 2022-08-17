#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int space = (n-1)/2 , star = 1;
for ( int i = 0; i < (n+1)/2; i++)
{
    for ( int i = 0; i < 2; i++)
    {
       for ( int i = 0; i < space; i++) cout << " ";
       for ( int i = 0; i < star; i++) cout << "*";
       for ( int i = 0; i < space; i++) cout << " ";
    }
    cout << "\n";
    star += 2;
    space--;
}
star -= 4;
space += 2;
for ( int i = 0; i < (n-1)/2; i++)
{
    for ( int i = 0; i < 2; i++)
    {
       for ( int i = 0; i < space; i++) cout << " ";
       for ( int i = 0; i < star; i++) cout << "*";
       for ( int i = 0; i < space; i++) cout << " ";
    }
    star -= 2;
    space++;
    cout << "\n";
}
}