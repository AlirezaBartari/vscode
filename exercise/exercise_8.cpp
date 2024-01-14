#include <iostream>
using namespace std ;
int main (){
    int sum , x=1 , y=1,i ;

    while (x!=0 && y!=0){
        cin>> x >> y;
        i=x;
        sum =0;
        while(i!=0){
            sum += y;
            i--;
        
        }
        cout << sum<<endl;
    }
    return 0;

}