#include <stdio.h>
double frac_a(double b, unsigned n){
    double res = b;
    for (unsigned i=0; i<n; ++i){
        res = b+1/res;
    }
    return res;
}

int main (){
    unsigned n;
    printf("n=");
    scanf("%u", &n);
    double b;
    printf("b=");
    scanf("%lf", &b);
    printf("b=%lf", frac_a);

}