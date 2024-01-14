#include <iostream>
using namespace std ;

int main()
{
    int n , m , sum ;
    cout << "Enter n , m : " ;
    cin >> n >> m ;
    int a[n][m];

    cout << "  Matrix : " << "\n" ;
    for( int i=0 ; i<n ; i++ )
        for( int j=0 ; j<m ; j++ )
            cin >> a[i][j];
            
    for( int i=0 ; i<n ; i++ )
    {  
        sum = 0 ;
        for( int j=0 ; j<m ; j++ )
            sum += a[i][j];
        cout << " row:" << i << " sum:" << sum << "\n" ;
    }
}