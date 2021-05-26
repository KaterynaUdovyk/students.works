#include <stdio.h>
#include <stdlib.h>
#include <codecvt>
#include <locale.h>
#include <string.h>


int main()
{
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251); // Вывод на консоль в кодировке 1251. Нужно только будет изменить шрифт консоли на Lucida Console или Consolas
    printf("1-");
    setlocale(LC_ALL, "Ukrainian");
    float m1=2+3;
    float m2=0.66;
    printf("Результат дорiвнює = %.f ;%.f ;%.2lf", m1 ,4.5*56, m2);
    //printf("Hello world!\n");
    printf("\n2-Введiть iмя ");
    char s[80];
    scanf("%s", s);
    printf("Привiт ");
    puts(s);


    printf("3-");
    double ank=0;
    scanf("%d", &ank);
    printf("%d Гривень\n", ank);
    scanf("%d", &ank);
    printf("%d Євро\n", ank);

    double a,b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    double m=a*b/(a+b);
    printf("%lf", m);
    struct tm *ptr;
    time_t lt;

    lt = time(NULL);
    ptr = localtime(&lt);
    printf(asctime(ptr));
    getch();


    setlocale(LC_ALL, "USA");
    lt = time(NULL);
    ptr = localtime(&lt);
    printf(asctime(ptr));
    getch();
    setlocale(LC_ALL, "Germany");
    lt = time(NULL);
    ptr = localtime(&lt);
    printf(asctime(ptr));
    getch();
    return 0;
}