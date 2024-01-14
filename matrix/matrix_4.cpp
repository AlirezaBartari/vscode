#include <iostream>
using namespace std;

int main()
{   
    bool lower = true , upper = true ;
    int n ;
    cout << "Enter n : ";
    cin >> n;
    int a[n][n];
    
    for(int i=0 ; i<n ; i++)
    {   for(int j=0 ; j<n ; j++)
        {  
            cout << " i" << i << " and j" << j << " : ";
            cin >> a[i][j];

            if( j>i & a[i][j] != 0)
                lower = false ;
            if( j<i & a[i][j] != 0)
                upper = false ;     
        }
    }
    if( upper==true & lower==true )
        cout << " It is diagonal matrix " << "\n";
    else
        cout << " It is not diagonal matrix" << "\n";
    
    return 0;   
}