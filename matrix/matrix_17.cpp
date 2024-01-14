#include <iostream>
using namespace std ;

int main()
{
    int n , m ,num ,divisor , sum = 0 ;
    cout << "Enter n and m : " ;
    cin >> n >> m ;
    int a[n][m] ;

    cout << " Matrix : " << "\n" ;
    for( int i=0 ; i<n ; i++ )
    {
        for( int j=0 ; j<m ; j++ )
        {
            cin >> a[i][j] ;
            num = a[i][j] ;

            divisor = 0 ;
            for( int k=1 ; k <= num ; k++ )
                if( num % k == 0 )
                    divisor += k ;
            
            if( num == (divisor/2) )
                sum += num ;
        }
    }
    cout << "sum of perfect numbers : " << sum << "\n" ;
}
