#include <iostream>
using namespace std;

int main(){
    
    double n,sum=1;
    cout<<"please enter number: ";
    cin>>n;
    cout<<1;

    for (int i=1 ; i<=n ; i++)

    {   if (i%2 == 0)
        {   sum -= i;
            cout<< " - "<<i;
        }
        else if (i!= 1 & i%2 != 0 )
        {
            sum += i;
            cout<<" + "<<i;
        }
    }
    cout<<" = "<<sum<<endl;
    return 0;
}