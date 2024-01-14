#include <iostream>
using namespace std;

int main()
{
    int a[5]={3,4,2,8,10};

    for(int j=0 ;j<5 ; j++)

    {   for(int i=0 ; i<a[j]; i++)
            cout << a[j] << " ";

    cout<<"\n"; 
    }
    return 0;
}