
#include <Windows.h>
#include <clocale>
#include <iostream>


using namespace std;
int main() {

    SetConsoleOutputCP(CP_UTF8);
    //setlocale(LC_ALL, "Ukrainian");
    cout<<"Введiть iм'я: ";
    char s[80];
    cin>>s;
    cout<<"Привiт, ";
    puts(s);
}
