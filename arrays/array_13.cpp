#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "enter n : ";
    cin >> n ;
    int a[n], b[16]={0} ;

    for(int i=0 ; i<n ; i++)
    {   cout << "enter code : ";
        cin >> a[i];
        b[a[i]] ++ ;
    }
    for(int i=1 ; i<=15 ; i++)
        cout << "code" << i << ": " << b[i] << "\n";
}