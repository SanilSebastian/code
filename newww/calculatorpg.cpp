#include <iostream>
int main(){
    char op;
    double num1;
    double num2;
    double ans;
    std::cout<<"******************* CALCULATOR ******************* \n";
    std::cout<<"Enter the operand(+ - * /):";
    std::cin>>op;
    std::cout<<"Enter the number 1:";
    std::cin>>num1;
    std::cout<<"Enter the number2:";
    std::cin>>num2;
    switch (op)
    {
    case '+':
    ans=num1+num2;
    std::cout<<"Answer is :"<<ans<<"\n";
        break;
    case '-':
    ans=num1-num2;
    std::cout<<"Answer is :"<<ans<<"\n";
        break;
    case '*':
    ans=num1*num2;
    std::cout<<"Answer is :"<<ans<<"\n";
        break;
    case '/':
    ans=num1/num2;
    std::cout<<"Answer is :"<<ans<<"\n";
        break;
    default:
    std::cout<<"Enter operation is wrong!!\n";
        break;
    }
    std::cout<<"************************************************** ";
    return 0;
}