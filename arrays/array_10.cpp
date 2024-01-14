#include <iostream>
using namespace std;

int main()
{
    int n,check, k=0;
    cout<<"enter n : ";
    cin>>n;
    int a[n];
    
    for(int i=0 ; i<n ; i++)
    {
        cout<<"enter number : ";
        cin>>a[i];
    }
    cout<<"number for cheking : ";
    cin>>check;
    for(int i=0 ; i<n ; i++ )
    {
        if ( a[i] == check)
            k++;
    }
    cout<<"repeat of "<<check<<" = "<<k<<"\n";
    return 0;
}