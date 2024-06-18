//enum are user define data type that is a pair of names and integer constant
// it is great if u have a set of potentional options
#include <iostream>
enum day{monday=0,tuesday=1,wednesday=2,thursday=3,friday=4,saturday=5,sunday=6};
enum name{luffy,zoro,sanji,jimba,brook,nami,robin,};
int main()
{
    day today=monday;
    switch (today)
    {
        case monday:
        std::cout<<"TODAY IS MONDAY!!";
        break;
        case tuesday:
        std::cout<<"TODAY IS TUESDAY!!";
        break;
        case wednesday:
        std::cout<<"TODAY IS WEDNESDAY!!";
        break;
        case thursday:
        std::cout<<"TODAY IS THURSDAY!!";
        break;
        case friday:
        std::cout<<"TODAY IS FRIDAY!!";
        break;
        case saturday:
        std::cout<<"TODAY IS SATURDAY!!";
        break;
        case sunday:
        std::cout<<"TODAY IS SUNDAY!!";
        break;
        default:
        std::cout<<"ITS IS INVALID INPUT";
        break;
    }
    day name=zoro;
    switch (today)
    {
        case 0:
        std::cout<<"TODAY IS MONDAY!!";
        break;
        case 1:
        std::cout<<"TODAY IS TUESDAY!!";
        break;
        case 2:
        std::cout<<"TODAY IS WEDNESDAY!!";
        break;
        case 3:
        std::cout<<"TODAY IS THURSDAY!!";
        break;
        case 4:
        std::cout<<"TODAY IS FRIDAY!!";
        break;
        case 5:
        std::cout<<"TODAY IS SATURDAY!!";
        break;
        case 6:
        std::cout<<"TODAY IS SUNDAY!!";
        break;
        default:
        std::cout<<"ITS IS INVALID INPUT";
        break;
    }
    return 0;
}