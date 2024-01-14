#include <iostream>
using namespace std;

int main()
{
    bool f = true ;
    int n;
    cout << " Enter n : ";
    cin >> n;
    int a[n][n];

    for(int i=0 ; i<n ; i++)
    {   for(int j=0 ; j<n ; j++)
        {  
            cout << " i" << i << " and j" << j << " : ";
            cin >> a[i][j];

            if( j>i & a[i][j] != 0 )
                f = false ;
        }
    }

    if( f == false )
        cout << " It is not lower triangular matrix " << "\n";
    else
        cout << " It is lower triangular matrix " << "\n";
    
    return 0 ;
}