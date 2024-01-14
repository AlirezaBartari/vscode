#include <iostream>
using namespace std;

int main()
{   
    int n ;
    float ave, sum = 0;
    cout<<"enter n: ";
    cin>> n;
    int a[n];

    for(int i=0 ; i<n ;i++)
    {
        cout<<"enter any number: ";
        cin>>a[i];
    }    
    for(int i=0 ; i<n ;i++)
        sum += a[i];
    ave = sum /n;
    cout<<"average : "<<ave<<"\n";

    return 0;
}