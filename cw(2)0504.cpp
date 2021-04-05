#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    char str[10];
    unsigned a;
    unsigned long long sum=0L;
    std::cout<<"Enter";
    while (std::cin.get(str,10)){
        std::cout<<str<<","<<std::endl;
        a = atoi(str);
        sum=+a;
    }
    std::cout<<"s="<<sum;

    return 0;

}

