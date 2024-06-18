#include <iostream>
    //cout << (output)
    //cin  >> (input)
int main(){
    std::string name;
    int age;
    std::cout<<"whats your name:";
    //std::cin>>name;
    std::getline(std::cin,name); //for adding space
    std::cout<<"whats your age:";
    std::cin>>age;
    std::cout<<"hello "<<name<<"\n";
    std::cout<<"your are "<<age<<" years old";
    return 0;
}