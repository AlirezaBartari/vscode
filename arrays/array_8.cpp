#include <iostream>
using namespace std;

int main()
{
    int num , a[100], i=0;
    cout<<"Enter number : ";
    cin>> num;
    
    for( ;num != 0; num = (num/2) )
    {
        a[i] = num % 2 ;
        i++;
    }
    for(int j=0 ; j<=i ; j++)
        cout<<a[j];
    cout<<"\n";
    return 0;
}  