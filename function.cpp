#include <studio.h>
#include <math.h>
double task_03_1a(double x) {
    double y = x*x  +1;
    return y*y;
}
int main(){
    double x,y;

    scanf("%lf", &x);

    if(fabs(task_03_1a(0)-1.00)>0.00001){
        printf("Error in function at x=0");
    }
    if(fabs(task_03_1a(-2)-25.0)>0.00001){
        printf("Error in function at x=-2");
    }
    y = task_03_1a(x);
    printf("y=%lf", y);
}