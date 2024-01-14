#include <iostream>
using namespace std;

int main ()
{
    int n , max , min ;
    cout<<"enter n :";
    cin>>n;
    int a[n];
    for(int i=0 ; i<n ; i++)
        cin>>a[i];
    max = a[0];
    min = a[0];
    for(int i=0 ; i<n ; i++)
    {
        if (max<a[i])
            max = a[i];
        else 
            min = a[i];    
    }
    cout<<"max : "<< max<< "\n";
    cout<<"min : "<< min<< "\n";
}