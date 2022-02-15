#include <stdio.h>
int fib5_a(int M){
    int k=0;
    int f0=0, f1=1, fk;
for (;f1<M;) {
    k++;

    fk= f0+f1;
    f0=f1;
    f1=fk;
}
    return k;
}
int main(){
    int k = 19;
    printf("F(%d)<%d, F(%d)>%d \n", fib5_a(k),k);

    scanf("%d",&k);
    printf("F(%d)<%d, F(%d)>%d \n", fib5_a(k),k);
}