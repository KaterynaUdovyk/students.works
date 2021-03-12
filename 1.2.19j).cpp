#include <stdio.h>

using namespace std;
int main(){
    int k;
    printf("k=");
    scanf("%d",&k);
    double x;
    printf("x=");
    scanf("%lf", &x);
    double xk=1;
    for (int i = 0; i < k; ++i) {
        xk *= -1;
    }
    for (int i = 1; i <= 2*k; ++i) {
        xk *= x/i;
    }
    double res = xk ;
    printf("result=%lf", res);
}