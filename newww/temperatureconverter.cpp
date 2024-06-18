#include <iostream>
int main()
{
    double temp;
    double ans;
    char unit;
    std::cout<<"*********************** TEMPERATURE CONVERTER ***********************\n";
    std::cout<<"C=celius\n";
    std::cout<<"F=farenhite\n";
    std::cout<<"Enter the unit:";
    std::cin>>unit;
    if(unit=='F'||unit=='f')
    {
        std::cout<<"Enter the temperature:";
        std::cin>>temp;
        ans=(1.8*temp)+32.0;
        std::cout<<ans<<"f\n";
    }
    else if (unit=='C'||unit=='c')
    {
        std::cout<<"Enter the temperature:";
        std::cin>>temp;
        ans=(temp-32)/1.8;
        std::cout<<ans<<"c\n";
    }
    else
    {
        std::cout<<"Enter only C or F !!\n";
    }
    std::cout<<"*********************************************************************\n";
    return 0;
}