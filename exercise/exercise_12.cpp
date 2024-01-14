#include <iostream>
#include <cmath>
using namespace std ;

int main()
{   
    double n,x,sum=0;

    cout<<"Enter x :";
    cin>>x;
    cout<<"Enter n :";
    cin>>n;

    for (int i=1; i<= n; i++ )
    {
        sum += pow(x,i);
    }
    
    cout<<"sum = "<<sum<<endl;
    return 0 ;
}