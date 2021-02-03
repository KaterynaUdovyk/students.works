#include <studio.h>

void task1(unsigned n){
    if((n>=100) &&(n<=999)){
        a = n%10;
        b = (n/10)%10;
        c = n/100;

        s = a+b+c;
        unsigned m = 100*a + 10*b + c;

        printf("%u, %u, %u; sum = %u, inversia = %u", c,b, a,s,m);
    }
}
int main(){
    unsigned n;
    print("n=");
    scanf("%u", &n);
    task1(n);
}
