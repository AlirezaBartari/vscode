#include <iostream>
using namespace std;

int main ()
{
    int n , m ;
    cout << " Enter n and m : " ;
    cin >> n >> m ;
    int a[n][m] ;

    cout << " Matrix : " << "\n";
    for( int i=0 ; i<n ; i++ )
        for( int j=0 ; j<m ; j++ )
            cin >> a[i][j] ; 

    cout << "\n" ;
    for( int i=0 ; i<n ; i++ )
    {   for( int j=0 ; j<m ; j++ )
        {
            if( i==0 || j==0 || i == n-1 || j == m-1  )
                cout << a[i][j] << " ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
}