#include <iostream>
using namespace std;

int main()
{
    int a[100] ,b[100] ,i=0 ,j=0 ,n ,number ;
    cin>>n;

    while(i+j<n)
    {   cin >> number;

        if(number >= 0)
        {   a[i] = number;
            i++;
        }
        else
        {   b[j] = number;
            j++;
        }
    }
    cout<<"positive : ";
    for(int k=0; k<i ;k++)
        cout<<a[k]<<"  ";

    cout<<"negative : ";
    for(int k=0; k<j ;k++)
        cout<<b[k]<<"  ";
    cout<<"\n";
    return 0;    
}
