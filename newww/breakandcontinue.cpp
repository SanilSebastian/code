#include <iostream>
int main(){
    int i;
    for(i=1;i<=20;i++)
    {
        if(i==13)
        {
            continue;
        }
        if(1==15)
        {
            break;
        }
        std::cout<<i<<"\n";
    }
}