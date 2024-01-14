#include <iostream>
using namespace std ;

int main()
{
    int n ;
    cout << "Enter n : ";
    cin >> n ; 
    int a[n], b[n], c[n];
    for(int i=0 ; i<n ; i++)
    {   cout << "Enter " << "a[" << i << "] : ";
        cin >> a[i];
    }
    for(int i=0 ; i<n ; i++)
    {   cout << "Enter " << "b[" << i << "] : ";
        cin >> b[i];
    }
    for(int i=0 ; i<n ; i++)
    {   c[i] = a[i] + b[i] ;
        cout << c[i] << "  ";
    }
    cout << "\n" ;
    return 0 ;
} 