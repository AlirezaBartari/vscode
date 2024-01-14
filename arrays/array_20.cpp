#include <iostream>
using namespace std;

int main()
{
    int n, f=0 ,number, a[1000];
    cout << "enter n : ";
    cin >> n ;
    for(int i=0 ; i<n ; i++)
    {
        cout << "enter number " << i <<": ";
        cin >> a[i];
    }
    cout << "enter any number : ";
    cin >> number ;
    for( int i=0 ;i<n ; i++)
    {
        if(number == a[i])
            f++;
    }
    if( f==0 )
    {
        a[n] = number;
        n++;
    }
    for (int i=0 ;i<n ;i++ )
        cout << a[i] << "  ";
    cout << "\n";   
}