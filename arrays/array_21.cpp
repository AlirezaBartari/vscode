#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, number,f=0, a[100];
    cout << "enter n : ";
    cin >> n;
    for(int i=0 ;i<n ; i++)
    {   cout << "enter "<< "a["<<i<<"]";
        cin >> a[i];
    }
    cout << "enter any number : ";
    cin >> number ;
    for( int i=0 ;i<n ; i++)
    {
        if(number == a[i])
            f++;
    }
    if( f==0 )
    {
        a[n] = number;
        n++;
    }
    sort(a , a+n);
    for(int i=0 ;i<n ; i++)
        cout << a[i] << "  ";
    cout << "\n";    
}