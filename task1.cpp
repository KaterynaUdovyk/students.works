#include <iostream>
#include <Windows.h>
using namespace std;
int main() {

    SetConsoleOutputCP(CP_UTF8);

    //setlocale(LC_ALL, "Ukrainian");

    float a=2, b=3.0, c=4.5, d=56;

    std::cout << "Результат 2+3  дорівнює:  " << a+b  << std::endl;
    std::cout << " Результат 4.5*56 дорівнює:  " << c*d << std::endl;
    std::cout << " Результат 2/3.0 дорівнює:  " << a/b << std::endl;

}





