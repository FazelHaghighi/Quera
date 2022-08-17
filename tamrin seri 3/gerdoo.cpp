#include <iostream>
using namespace std;
int ghadam ( int n, int x, int y)
{
    int i, j;
	for ( i = 0; i * x <= n; i++)
        {
		for ( j = 0; j * y <= n; j++)
		{
			if ( x * i + y * j == n)
			{
				cout << i << " " << j;
                return 0;
			}
		}
	}
	cout << -1;
}

int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    ghadam ( n, x, y);
}