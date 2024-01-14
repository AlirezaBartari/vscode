#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, j=0 ;
    cout << "enter n : ";
    cin >> n;
    int a[n], b[n], c[2*n];

    cout << "enter array a : "<<"\n";
    for(int i=0 ; i<n ; i++)
        cin >> a[i];

    cout << "enter array b : "<< "\n";
    for(int i=0 ; i<n ; i++)
        cin >> b[i];

    for(int i=0 ; i<n ; i++)        
        c[i] = a[i];
    for(int i=n ; i<2*n ; i++)  
    {   c[i] = b[j] ;
        j++ ;
    }
    sort( c , c+(2*n));
    for (int i=0 ; i<(2*n) ; i++)
        cout << c[i]<< " ";
    cout << "\n";
}