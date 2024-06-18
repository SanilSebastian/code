//function template can generaate as many overload it need
//can each use different data type
#include <iostream>
template <typename T,typename U>
auto max(T x,U y)
{
    return(x>y)?x:y;
}
int main()
{
    std::cout<<max(2,2.6)<<"\n";
    return 0;
}