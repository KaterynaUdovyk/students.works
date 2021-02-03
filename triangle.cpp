#include <studio.h>
#include <math.h>
double lenth(double x1, double y1, double x2, double y2) {
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
double square_triangle(double a, double b, double c){
    double p = (a+b+c)/2;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}
int main(){
    double ax, ay, bx, by, cx, cy;
    printf("A:\n");
    scanf("%lf %lf", &ax, &ay);
    printf("B:\n");
    scanf("%lf %lf", &bx, &by);
    printf("C:\n");
    scanf("%lf %lf", &cx, &cy);

    double a  = lenth(ax, ay, bx, by);
    double b  = lenth(bx, by, cx, cy);
    double c  = lenth(cx, cy, ax, ay);

    double s = square_triangle(a,b,c);
    printf("S=%lf", s)
}