#include <iostream>
using namespace std ;

int calculate_tax ( long salary ) ;

int main()
{
    long salary, tax ;
    cout << "Enter salary : " ;
    cin >> salary ;

    tax = calculate_tax( salary );
    cout << " tax : " << tax << "\n" ;

    return 0 ;
}

int calculate_tax ( long salary )
{   
    int tax = 0 ;

    if( salary >= 0 & salary < 483000 )
        return 0 ; 

    else if( salary >= 483000 & salary < 600000 )
    {   
        tax = salary*10 / 100 ;
        return tax ;
    }
    else if( salary >= 600000 & salary < 1000000 )
    {
        tax = salary*15 / 100 ;
        return tax ;
    }
    else if( salary >= 1000000 & salary < 2000000 )
    {
        tax = salary*20 / 100 ;
        return tax ;
    }
    else if( salary >= 2000000 & salary < 99999999 )
    {
        tax = salary*30 / 100 ;
        return tax;
    }
    else
        return -1 ;
}
