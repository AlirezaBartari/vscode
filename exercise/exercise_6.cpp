#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n , x , sign=-1,i=1 , F= 1 , b =2;
    double sum=x;
    cin>>n;
    cin>>x;
    
    while (i<=n) {

        i++;
        F = F *i;
        sum = sum + sign*(pow(x,b)/F);
        sign = sign *-1;
        b++;
    }   
    cout<<sum <<endl;

    return 0;


}