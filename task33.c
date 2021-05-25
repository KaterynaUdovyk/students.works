#include <stdio.h>
#include <locale.h>
#include <Windows.h>

int main ()
{
    SetConsoleOutputCP(CP_UTF8);
    //setlocale(LC_ALL, "Ukrainian");
    double ank=0;
    scanf("%d", &ank);
    printf("%d Гривні 00 копійок\n", ank);
    scanf("%d", &ank);
    printf("%d Euro 00 cent\n", ank);
}
