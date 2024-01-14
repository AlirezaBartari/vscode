#include <iostream>
using namespace std;

int main(){
    
    double sum=0, n , F=1;
    cout<< "please enter your number: ";
    cin>> n;

    for ( int i=1 ; i<=n ; i++ ){
        F *= i;
        sum += 1/F;
    }
    cout<< "sum is: " << sum << endl;
    return 0;
}