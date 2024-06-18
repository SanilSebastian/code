#include <iostream>
#include <vector>
//typedef std::vector<std::pair<std::string, int>>pairlist_t;
//its used to give another name to data type 
//another example
typedef std::string text_t;
//can also use
using number_t =int;
int main(){
    number_t mark=74;
    text_t firstname="bro";
    std::cout<<mark<<"\n";
    std::cout<<firstname;
    return 0;
}