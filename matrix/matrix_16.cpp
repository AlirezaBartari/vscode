#include <iostream>
using namespace std;

int main ()
{
    int n , m ,num , f = 0 , prime = 0 ;
    cout << " Enter n and m : " ;
    cin >> n >> m ;
    int a[n][m] ;

    cout << "Matrix : " << "\n";
    for( int i=0 ; i<n ; i++ )
        for( int j=0 ; j<m ; j++ )   
        {   
            cin >> a[i][j];
            num = a[i][j];
            f = 0 ;

            for( int k=1 ; k <= num ; k++ )
                    if( num % k == 0 )
                        f += 1 ;
                
            if( f == 2 )
                prime += 1 ;
        }

    cout << " Prime numbers : " << prime << "\n" ;
}