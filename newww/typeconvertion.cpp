#include <iostream>
int main(){
    //type covertion =changing data type
    //implicit =automatic
    //explicit =preced code value witth new one
    
    double x=(int)3.14;//explicit
    std::cout<<x<<"\n";
    char y=100;
    std::cout<<y<<"\n";//implixit
    //std::cout<<(char)100;
    int correct=8;
    int question=10;
    double score =correct/(double)question*100;
    std::cout<<score<<"%";
    return 0;
}