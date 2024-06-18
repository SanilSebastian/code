#include <iostream>
int main(){
    std::string name;
    std::cout<<"Enter the name:";
    std::getline(std::cin, name);
    //name.empty() is used check if the name is empty or not
    //name.clear() is to clear the name or delete it
    if(name.length()>12)
    {
        std::cout<<"Name is too long !!!\n";
    }
    else
    {
        std::cout<<"welcome "<<name<<"\n";
    }
    name.append("@gmail.com\n");//append is used for add a string
    std::cout<<"your username :"<<name;
    std::cout<<name.at(1)<<"\n";//to print according to index number
    name.insert(0,"@");//insert to an index number0
    std::cout<<name.find("");//to find a char 
    std::cout<<name.erase(0,3);//delete which to delete
    std::cout<<name;
    return 0;
}