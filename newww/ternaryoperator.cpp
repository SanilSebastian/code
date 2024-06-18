#include <iostream>
int main(){
    //ternary operator is a replacement for if else statement
    //condition? expression1 : expression2;
    int grade =50;
    grade >= 60 ? std::cout<<"you Pass" : std::cout<<"you fail";
    grade %2==1 ? std::cout<<"ODD" : std::cout<<"EVEN";
    return 0;
}