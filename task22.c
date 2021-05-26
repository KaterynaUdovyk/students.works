#include <stdio.h>
#include <locale.h>
#include <Windows.h>
int main () {
    SetConsoleOutputCP(CP_UTF8);
    printf("Введiть iм'я: ");
    char s[80];
    scanf("%s", s);
    printf("Привiт ");
    puts(s);
}