#include <iostream>
using namespace std;

int main ()
{
    int n, m ;
    cout << "Enter n , m : " ;
    cin >> n >> m;
    int a[n][m] , b[m][n];

    for(int i=0 ; i<n ; i++ )
    {   for( int j=0 ; j<m ; j++ )
        {
            cout << " i" << i << " j" << j << " : ";
            cin >> a[i][j];

            b[j][i] = a[i][j];
        }
    }
    cout << "\n";
    for( int i=0 ; i<n ; i++ )
    {   for( int j=0 ; j<m ; j++ )

            cout << a[i][j] << " ";
        cout << "\n";
    }

    cout << "\n";
    for( int i=0 ; i<m ; i++ )
    {   for( int j=0 ; j<n ; j++ )

            cout << b[i][j] << " ";
        cout << "\n";
    }
}