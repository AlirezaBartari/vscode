#include <iostream>
using namespace std ;

int main()
{
    int n, num, i=0, b[101] = {0};
    cout<<"enter n: ";
    cin>>n;
    int a[n];
    
    while(i<n)
    {   cout<<"enter number : ";
        cin>>num;
        if(num <= 100 & num > 0 )
        {   a[i] = num;
            i++;
        }
        else 
            cout<<"please enter a number below hundred !";
    }
    for(i=0 ; i <= n ; i++)
        b[a[i]]+= 1 ;
        
    for(i=1 ; i <= 100 ; i++)
        cout<<"repeat of "<< i <<" = "<<b[i]<<"\n";
    
    return 0;

}