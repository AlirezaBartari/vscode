#include <iostream>
using namespace std;

int main()
{
    int n  ,cd, pr ;
    cout << "Enter n : ";
    cin >> n;
    int code[n], price[n];

    for(int i=0 ; i<n ; i++)
    {
        cout << "code "<< i << " : ";
        cin >> code[i];
        cout << "price " << i << " : ";
        cin >> price[i];
    }
    cout << " enter your code : ";
    cin >> cd;
    for(int i=0 ;i<n ; i++)
    {
        if(cd == code[i])
            pr = price[i];
    }
    cout <<" your expenses are : "<< pr << "\n";

    return 0;
}