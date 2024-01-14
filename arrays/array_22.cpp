#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n],b[n], c[100], cn =0 ;
    for(int i=0 ; i<n ; i++)
    {   cout << "enter a ";
        cin >> a[i];
        cout << "enter b ";
        cin >> b[i];
    }
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n ; j++)
        {
            if(a[i] == b[j])
            {
                c[i] = a[i];
                cn ++;
            }
        }
    }
    for( int i=0 ; i<cn ; i++)
        cout << c[i] << "  ";
}