#include <iostream>
struct student
{
    std::string name;
    double gpu;
    bool enrolled=true;
};
int main()
{
    student student1;
    student1.name="luffy";
    student1.gpu=6.2;
    student student2;
    student2.name="sanji";
    student2.gpu=5.2;
    student student3;
    student3.name="zoro";
    student3.gpu=4.2;
    std::cout<<"detail student 1:\n";
    std::cout<<"name: "<<student1.name<<"\n";
    std::cout<<"gpu: "<<student1.gpu<<"\n";
    std::cout<<"enrolled(if yes=1,no=0): "<<student1.enrolled<<"\n\n";
    std::cout<<"detail student 2:\n";
    std::cout<<"name: "<<student2.name<<"\n";
    std::cout<<"gpu: "<<student2.gpu<<"\n";
    std::cout<<"enrolled(if yes=1,no=0): "<<student2.enrolled<<"\n\n";
    std::cout<<"detail student 3:\n";
    std::cout<<"name: "<<student3.name<<"\n";
    std::cout<<"gpu: "<<student3.gpu<<"\n";
    std::cout<<"enrolled(if yes=1,no=0): "<<student3.enrolled<<"\n\n";
    return 0;
}
