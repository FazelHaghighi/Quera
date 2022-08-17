#include <iostream>
using namespace std;
int negetiveVolume( int A[], int highestBuilding, int height, int i)
{
    int buildingIsHighEnough = 0, result = 0, preBuilding = i;
    while ( buildingIsHighEnough == 0 & i > highestBuilding)
    {
        if ( A[preBuilding] > A[i-1])
        {
            result += height-A[preBuilding];
        }
        else 
        {
            buildingIsHighEnough = i-1;
            result += height-A[preBuilding];
        }
        i--;
    }
    if ( i > highestBuilding) result += negetiveVolume (A, highestBuilding, height, buildingIsHighEnough);
    return result;
}
int VolumeInRange( int A[], int i, int n){
    int buildingIsHighEnough = 0, result = 0, preBuilding = i;
    while ( buildingIsHighEnough == 0 & i < n-1)
    {
        if ( A[preBuilding] > A[i+1])
        {
            result += A[preBuilding]-A[i+1];
        }
        else buildingIsHighEnough = i+1;
        i++;
    }
    if ( i < n-1) result += VolumeInRange( A, buildingIsHighEnough, n);
    int buildingIsHigher = 0;
    if ( i == n-1 & A[i] < A[preBuilding]) result -= negetiveVolume ( A, preBuilding, A[preBuilding], n-1);
    return result;
}
int main()
{
int n;
cin >> n;
int A[n];
for ( int i = 0; i < n; i++) cin >> A[i];
int result = VolumeInRange ( A, 0, n);
cout << result << endl;
}