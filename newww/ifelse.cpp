#include <iostream>
int main(){
    int age;
    std::cout<<"Enter your age:";
    std::cin>>age;
    if(age>100){
        std::cout<<"you are too old to enter!!";
    }
    else if(age>=18){
        std::cout<<"welcome";
    }
    else if(age<0){
        std::cout<<"yo u are not been born yet!!";
    }
    else{
        std::cout<<"your are not old enough!!";
    }
    return 0;
}