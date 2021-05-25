#include <stdio.h>
#include <locale.h>
#include <Windows.h>
int main ()
{   SetConsoleOutputCP(CP_UTF8);
    float m1=2+3.0;
    float m2=2/3.0;
    printf("Результат дорiвнює = %.f ;%.f ;%.2lf", m1 ,4.5*56, m2);

}