#include <stdio.h>
#include <locale.h>
#include <Windows.h>
int main () {
    SetConsoleOutputCP(CP_UTF8);
    double a, b;
    printf("Введіть перше число:");
    scanf("%lf", &a);
    printf("Введіть друге число:");
    scanf("%lf", &b);
    double m = a * b / (a + b);
    printf("Середнє геометричне:");
    printf("%lf", m);
}