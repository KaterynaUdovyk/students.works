#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <time.h>

int getch();


int main() {
    struct tm *ptr;
    time_t lt;

    lt = time(NULL);
    ptr = localtime(&lt);
    printf("%d", asctime(ptr));
    getch();


    setlocale(LC_ALL, "USA");
    lt = time(NULL);
    ptr = localtime(&lt);
    printf("%d", asctime(ptr));
    getch();
    setlocale(LC_ALL, "Germany");
    lt = time(NULL);
    ptr = localtime(&lt);
    printf("%d", asctime(ptr));
    getch();
    return 0;
    }

    int getch() {
    return 0;
}

