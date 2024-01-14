#include <iostream>
using namespace std;

int main()
{
    int n ,i , j ;
    cout << "Enter n: " ;
    cin >> n ;
    int a[n], b[n] ;
    
    for(i=0 ; i<n ; i++)
    {   cout << "Enter number : ";
        cin >> a[i];
    }
    j = (n-1);
    for(i=0 ; i<n ; i++)
    {      
        b[j] = a[i] ;
        j-- ;
    }
    for(i=0 ; i<n ; i++)
        cout << b[i] << "  " ;

    cout << "\n";
    return 0 ;
    
}