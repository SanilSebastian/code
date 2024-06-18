#include <iostream>
int main(){
    double temp;
    bool climate;
    //there are 3 logic operator
    //&& is used for to check is both condition true 
    //|| is used for to check check any of the condition is true
    // ! is used for to take opposite of condition
    std::cout<<"Enter the the temperature:";
    std::cin>>temp;
    std::cout<<"is climate sunny(true or false):";
    std::cin>>climate;
    if(temp>=1&&temp<=30)
    {
        std::cout<<"its a good weather\n";
    }
    else
    {
        std::cout<<"its a bad weather\n";
    }
    if(temp>=31||temp<=0)
    {
        std::cout<<"its not normal\n";
    }
    else
    {
        std::cout<<"its normal\n";
    }
    if(climate==true)
    {
        std::cout<<"its sunny wheather";
    }
    else
    {
        std::cout<<"its not sunny";
    }
    return 0;
}