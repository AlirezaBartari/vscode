#include <iostream>
using namespace std ;

int main()
{
    int n, ID , k, c;
    cout<<"Enter n : ";
    cin >> n;
    int a[n];

    for(int i=0 ; i<n ; i++)
    {   cout<<"Enter student ID number "<<i<<" : ";
        cin>>a[i];
    }

    cout<<"Enter student ID for checking : ";
    cin>>ID;
    for(int i=0 ; i<n ;i++)
    {
        if(ID==a[i])
        {    k = 1;
             c = i;
        }
    }
    if(k == 1)
        cout<<"student ID found in : "<< c;
    else
        cout<<"\"student ID not found !\" "; 
    cout<<"\n";
    return 0 ;
}   