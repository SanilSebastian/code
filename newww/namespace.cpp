#include <iostream>

namespace first{      //its used for add same name entity
    int x=3;
}

namespace second{
    int x=2;
}

int main(){
    using namespace first; //used to just print just x for get first x
    std::cout<<x<<"\ n";
    std::cout<<second::x;  //used call x of second name space
    return 0;
}