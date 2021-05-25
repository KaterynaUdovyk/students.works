#include <iostream>
#include <Windows.h>

using namespace std;
int main() {

    SetConsoleOutputCP(CP_UTF8);


    double a,b;
    cin>>a;
    cin>>b;
    double m=a*b/(a+b);
    cout<< m ;

}
