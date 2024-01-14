#include <iostream>
using namespace std;

int main()
{
    int n ,m ,i ,j ,min ,max ;
    cout << "Enter n ,m : " ;
    cin >> n >> m ;
    int a[n][m] ;
    
    cout << "Enter matrix " << "\n" ;
    for( i=0 ; i<n ; i++ )
        for( j=0 ; j<m ; j++ )
            cin >> a[i][j] ;

    min = a[0][0] ;
    max = min ;

    for( i=0 ; i<n ; i++ )
        for( j=0 ; j<m ; j++ )
        {
            if( a[i][j] > max )
                max = a[i][j] ;
            if( a[i][j] < min )
                min = a[i][j] ;               
        }
    cout << " Min :" << min << " Max :" << max << "\n" ;

}