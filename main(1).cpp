#include <stdio.h>
#include <stdlib.h>
#include <codecvt>
#include <clocale>
#include <string.h>


int main()
{
    SetConsoleCP(1251); // Ввод с консоли в кодировке 1251
    SetConsoleOutputCP(1251); // Вывод на консоль в кодировке 1251. Нужно только будет изменить шрифт консоли на Lucida Console или Consolas
    cout<<"1-";
    setlocale(LC_ALL, "Ukrainian");
    float m1=2+3;
    float m2=0.66;
    cout<<"Результат дорiвнює = %.f ;%.f ;%.2lf", m1 ,4.5*56, m2);

    cout<<"\n2-Введiть iмя ";
    char s[80];
    cin>>s;
    cout<<"Привiт ";
    puts(s);


    cout<<"3-";
    double ank=0;
    scanf("%lf", &ank);
    cout<<"%d Гривень\n", ank);
    cin>>ank;
    cout<<"%d Євро\n", ank;

    double a,b;
    cin>>a;
    cin>>b;
    double m=a*b/(a+b);
    cout<<"%lf", m;
    struct tm *ptr;
    time_t lt;

    lt = time(NULL);
    ptr = localtime(&lt);
    cout<<asctime(ptr);
    getch();


    setlocale(LC_ALL, "USA");
    lt = time(NULL);
    ptr = localtime(&lt);
    cout<<asctime(ptr));
    getch();
    setlocale(LC_ALL, "Germany");
    lt = time(NULL);
    ptr = localtime(&lt);
    cout<<asctime(ptr);
    getch();
    return 0;
}