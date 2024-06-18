#include <iostream>
struct Car
{
    std::string model;
    int year;
    std::string colour;
};
void paintcar(Car &car,std::string colour);
void printcar(Car car);
int main()
{
    std::cout<<"first car:\n";
    Car car1;
    car1.model="lambo";
    car1.year=2023;
    car1.colour="red";
    printcar(car1);
    std::cout<<"Second car:\n";
    Car car2;
    car2.model="bugatti";
    car2.year=2024;
    car2.colour="red";
    paintcar(car2,"gold");
    printcar(car2);
    return 0;
}
void printcar(Car car)// without & address operator a copy is passed 
{
    std::cout<<car.model<<"\n";
    std::cout<<car.year<<"\n";
    std::cout<<car.colour<<"\n";
}
void paintcar(Car &car,std::string colour)//& the address operatore is passed to change the value
{
    car.colour=colour;
}
