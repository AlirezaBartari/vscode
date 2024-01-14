#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int x,sign=1,i=1;
    double sum=0,d=0;
    cin>> x;

    while (i<=10){
        d = d+(i*pow(x,i));
        sum = sum + sign *(1/d);
        sign = sign*-1;
        i++;

        
    }
    cout<<sum<<endl;
    
}