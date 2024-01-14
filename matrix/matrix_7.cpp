#include <iostream>
using namespace std;

int main()
{
    int n , m , min ;
    cout << "Enter n , m : ";
    cin >> n >> m ;
    int a[n][m];

    cout << "Enter matrix : "<< "\n";

    for( int i=0 ; i<n ; i++ )
    {   for( int j=0 ; j<m ; j++)
            cin >> a[i][j];
    }
    for ( int i=0 ; i<n ; i++ )
    {   
        min = a[i][0];
        for( int j=0 ; j<m ; j++)
        {
            if( a[i][j] < min  )
                min = a[i][j];
        }
        cout << " min in row " << i << " is : " << min << "\n" ; 
    }
}