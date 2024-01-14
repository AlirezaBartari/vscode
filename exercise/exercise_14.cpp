#include <iostream>
using namespace std ;

int main()
{
    int n ;
    cout<<"Enter n :";
    cin >>n;

    for(int i=1 ; i <= n; i++)
    {
        for(int j=n; j!= 0; j--)
        {
            if (i==n || j==1 || j==i)
                cout<<"* ";
            else 
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}