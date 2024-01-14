#include <iostream>
using namespace std;

int main()
{
    int a[6] , j=0;

    for(int i=100; i <= 600 ; i +=100 )
    {
        a[j] = i;
        j++;
    }
    for(int k=1; k <= 9 ; k++)
    {
        for(int i=0; i<=5 ; i++)  
            cout<<a[i]<<"\t";

        for(int i=0; i<=5 ; i++)
            a[i] += 50;

        cout<<"\n"<<"\n";
    }    
    return 0;
}
