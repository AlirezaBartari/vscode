#include <iostream>
using namespace std;

int main()
{   int n;
    cout<< "enter n: ";
    cin >> n;
    int a[n], b[n], c[n]={0}, x=n, k=false, cn=0;
    for(int i=0; i<n ; i++ )
    {   cout << "enter a["<<i<<"] : ";
        cin >> a[i];
        cout <<"enter b["<<i<<"] : ";
        cin >> b[i];
    }
    for(int i=0 ; i<n ; i++)
    {   k = false;
        for(int j=0 ; j<n ;j++)
        {
            if(a[i] == b[j])
            {   k = true;
                x--;
            }
        }
        if(k==false)
        {  c[cn] = a[i];
           cn++;
        }
    }
    cout << "A - B : ";
    for (int i=0 ; i<cn ; i++)
        cout << c[i] <<"  ";

    cout<<endl;
}