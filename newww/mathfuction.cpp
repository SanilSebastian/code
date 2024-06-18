#include <iostream>
#include <cmath>
int main(){
    double x=3.56;
    double y=4;
    double z,a,b,c,d,e,f,g;

    z=std::max(x,y);
    a=std::min(x,y);
    b=std::pow(2,4);
    c=std::sqrt(6);
    d=std::abs(-6);
    e=std::round(x);
    f=std::ceil(x);
    g=std::floor(x);
    std::cout<<"z is "<<z;
    std::cout<<" a is "<<a;
    std::cout<<" b is "<<b;
    std::cout<<" c is "<<c;
    std::cout<<" d is "<<d;
    std::cout<<" e is "<<e;
    std::cout<<" f is "<<f;
    std::cout<<" g is "<<g;
    return 0;
}