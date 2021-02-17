#include <stdio.h>

double f1(int n){

    double p = 1.0;
    double d = 1.0;
    for(int i=2; i<=n; i++){
        d/=i;
        p*=(2+d);
    }
        return p;
}
int main(){

    int n;
    printf("n=");
    scanf("%d",&n);

    printf("p=%lf", f1(n));
}