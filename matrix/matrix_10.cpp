#include <iostream>
using namespace std ;

int main ()
{
    int n, k, main=1 ,sec=1 ;
    cout << "Enter n : " ;
    cin >> n ;
    int a[n][n];

    cout << " Enter Matrix " << "\n" ;
    for( int i=0 ; i<n ; i++ )
        for( int j=0 ; j<n ; j++ )
            cin >> a[i][j];

    k = n-1 ;
    for( int i=0 ; i<n ; i++ )
    {   
        for( int j=0 ; j<n ; j++ )
            if( i == j )
                main *= a[i][j] ;

        sec *= a[i][k];
        k -= 1;
    }
    cout << " Main diagonal: "<< main << "\n" << " Secondary diagonal: "<< sec << "\n" ;
}