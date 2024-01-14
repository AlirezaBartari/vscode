#include <iostream>
using namespace std;

int main()
{   
    bool f = true , lower = true , upper = true ;
    int n ;
    cout << "Enter n : ";
    cin >> n;
    int a[n][n];
    
    for(int i=0 ; i<n ; i++)
    {   for(int j=0 ; j<n ; j++)
        {  
            cout << " i" << i << " and j" << j << " : ";
            cin >> a[i][j];

            if( j==i & a[i][j] != 1)
                f = false;
            if( j>i & a[i][j] != 0)
                lower = false ;
            if( j<i & a[i][j] != 0)
                upper = false ;     
        }
    }
    if( f==true & upper==true & lower==true )
        cout << " It is identity matrix " << "\n";
    else
        cout << " It is not identity matrix" << "\n";
    
    return 0;   
}
