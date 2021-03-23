#include <stdio.h>

#define N 10

int check(int mas[], int n){
    int i=0;
    while (i>=0){
        int ost = n % 10;
        mas[ost]++;
        n = n / 10;
        if (n==0){break;}
    }
    int max=0, p=0, max_res=0;
    for (int j = 0; j < N; ++j) {
        if (mas[j]>max){
            max = mas[j];
            max_res = j;
        }
        if (mas[j]==max){
            if (j>max_res){
                max_res = j;
            }
        }
    }
    return max_res;
}

int main(){
    int mas[]={0,0,0,0,0,0,0,0,0,0};
    int n;
    printf("Input n:");
    scanf("%d", &n);
    printf("Result: %d", check(mas, n));
}
