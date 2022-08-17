#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	int i, j, k, n, m;
	cin >> n;
	cout << endl;
	
	for ( i = 0; i < n-1-i; i++)
	{
		m = 1;
	for ( j = 0; j < n; i++)
	{
		cout << "";	
	}
	for ( k = 0; k <= i; k++)
	{
		cout << "" << m;
		m = m * ( i-k)/(k+1);
		}	
		cout << endl;
	}
	
	getch ();
	return 0;	
}
