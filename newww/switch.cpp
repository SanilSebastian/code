#include <iostream>
int main(){
    int month;
    std::cout<<"Enter the month (1 to 12):";
    std::cin>>month;
    switch (month)
    {
    case 1:
    std::cout<<"this is January";
    break;
    case 2:
    std::cout<<"this is Febuary";
    break;
    case 3:
    std::cout<<"this is March";
    break;
    case 4:
    std::cout<<"this is April";
    break;
    case 5:
    std::cout<<"this is May";
    break;
    case 6:
    std::cout<<"this is June";
    break;
    case 7:
    std::cout<<"this is July";
    break;
    case 8:
    std::cout<<"this is August";
    break;
    case 9:
    std::cout<<"this is September";
    break;
    case 10:
    std::cout<<"this is October";
    break;
    case 11:
    std::cout<<"this is November";
    break;
    case 12:
    std::cout<<"this is December";
    break;
    default:
    std::cout<<"plese enter a number betweeen 1 to 12!!";
        break;
    }
    return 0;
}