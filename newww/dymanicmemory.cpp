//dynamic memmory used to allocate memory after compaling and running
//it uses new operator
//used when we dont know how much memory we need.make the program felxible
#include <iostream>
int main()
{
    int *pnum=NULL;
    pnum=new int;
    *pnum=21;
    std::cout<<"ADDRESS :"<<pnum<<"\n";
    std::cout<<"VALUE :"<<*pnum<<"\n";
    //2nd example
    std::cout<<"next example"<<"\n";
    char *pgrades=NULL;
    int size;
    std::cout<<"Enter the number of grades :";
    std::cin>>size;
    pgrades=new char[size];
    for(int i=0;i<size;i++)
    {
        std::cout<<"Enter the grade #"<<i+1<<":";
        std::cin>>pgrades[i];
    }
    for(int i=0;i<size;i++)
    {
        std::cout<<"grades are: "<<pgrades[i]<<"\n";
    }
    delete[] pgrades;
    return 0;
}