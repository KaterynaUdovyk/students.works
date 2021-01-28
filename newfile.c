#include <stdio.h>
int main() {
    double x, y;
    printf("x=");
    scanf("%lf", &x);
    printf("y=");
    scanf("%lf", &y);
    double z = (x + y) / 2;
    double w = 2 / ((1 / x) + (1 / y));
    std :
    printf("%lf %le \n", z, z);
    printf("%lf %le  \n", w, w);
}