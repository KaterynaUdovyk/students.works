#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    SetConsoleCP(1251); // ���� � ������� � ��������� 1251
    SetConsoleOutputCP(1251); // ����� �� ������� � ��������� 1251. ����� ������ ����� �������� ����� ������� �� Lucida Console ��� Consolas
    printf("1-");
    setlocale(LC_ALL, "Ukrainian");
    float m1=2+3;
    float m2=0.66;
    printf("��������� ���i���� = %.f ;%.f ;%.2lf", m1 ,4.5*56, m2);
    //printf("Hello world!\n");
    printf("\n2-����i�� i�� ");
    char s[80];
    scanf("%s", s);
    printf("����i� ");
    puts(s);


    printf("3-");
    double ank=0;
    scanf("%d", &ank);
    printf("%d �������\n", ank);
    scanf("%d", &ank);
    printf("%d ����\n", ank);

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
