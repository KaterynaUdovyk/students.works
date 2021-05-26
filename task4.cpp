#include <iostream>
#include <Windows.h>

using namespace std;
int main() {

    SetConsoleOutputCP(CP_UTF8);


    double a,b;
    cout<<"Введіть число а:";
    cin>>a;
    cout<<"Введіть число б:";
    cin>>b;
    double m=a*b/(a+b);
    cout<<"Середнє геометричне:";
    cout<< m ;

}
