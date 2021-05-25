#include <codecvt>
#include <clocale>
#include <cstring>
#include <ctime>
#include <iostream>
#include <Windows.h>
int getch();

using namespace std;

int main() {
    time_t lt;
    SetConsoleOutputCP(CP_UTF8);
    lt = time(nullptr);
    auto ptr = localtime(&lt);
    cout<<"Час:"<<asctime(ptr);
    getch();


    setlocale(LC_ALL, "USA");
    lt = time(nullptr);
    ptr = localtime(&lt);
    cout<<"Time:"<<asctime(ptr);
    getch();

    setlocale(LC_ALL, "Germany");
    lt = time(nullptr);
    ptr = localtime(&lt);
    cout<<"Zeit:"<<asctime(ptr);
    getch();
}

int getch() {
    return 0;
}
