#include <iostream>
using namespace std;

int main()
{
    int a[100], n ;
    cout<<"Enter N : ";
    cin>> n;
    for(int i=0 ; i<n ; i++)
    {
        cout<<"Enter any number : ";
        cin>>a[i];
    }
    for(int i=(n-1); i>=0; i--)
    
        cout<<a[i]<<"  ";

    cout<<"\n";
    
    return 0;
}