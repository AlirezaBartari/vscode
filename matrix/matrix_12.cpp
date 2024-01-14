#include <iostream>
using namespace std;

int main()
{
    int n , m , mult ;
    cout << " Enter n , m : " ;
    cin >> n >> m ;
    int a[n][m] ;

    cout << " Matrix : " << "\n" ;
    for( int i=0 ; i<n ; i++ )
        for( int j=0 ; j<m ; j++ )
            cin >> a[i][j];

    for( int j=0 ; j<m ; j++ )
    {   
        mult = 1 ; 
        for( int i=0 ; i<n ; i++ )
            mult *= a[i][j];
        cout << "column:" << j << " mult:" << mult << "\n" ;
    }
}