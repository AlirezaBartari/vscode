#include <iostream>
using namespace std ;

int main()
{
    int n , m ,num ,even = 1  ;
    cout << "Enter n and m : " ;
    cin >> n >> m ;
    int a[n][m];

    cout << " Matrix :" << "\n" ;
    for( int i=0 ; i<n ; i++ )
        for( int j=0 ; j<m ; j++ )
        {    
            cin >> a[i][j] ;
            num = a[i][j] ;

            if( num % 2 == 0 )
                even *= num ;
        }

    cout << " mult of even numbers : " << even << "\n" ;
}
