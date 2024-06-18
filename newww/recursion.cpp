//recursion is a programming techinque where functio invoke its self from within
//it can be used insted of iteration in most cases
//it is cleaner and hass less code
//its slow and take more memory
// it can cause stack overflow
#include <iostream>
void walk(int step1);
void run(int step2);
int factorial(int  num);
int main()
{
    walk(5);
    run(6);
    std::cout<<factorial(4);
    return 0;
}
void walk(int step1)//using iteration
{
    for(int i=1;i<=step1;i++)
    {
        std::cout<<"walking step #"<<i<<"\n";
    }
}
void run(int step2)
{
    if(step2>0)
    std::cout<<"running step #\n";
    run(step2 -1);
}
int factorial(int  num)
{
    int result=1;
    for (int i = 0; i < num; i++)
    {
        result=result*i;
    }
    return result;
}