int rec_b(){
    int x0=-99, x1=-99, x2=-99, xn;
    int k=3;
    while(x2<0){
        xn = x2+x1+x0+100;
        x0=x1;
        x1=x2;
        x2=xn;
    }
    return xn;
}

int rec_c(){
    int x0=-99, x1=-99, x2=-99, xn;
    int k=3;
    while(x2<0){
        xn = x2+x1+x0+100;
        x0=x1;
        x1=x2;
        x2=xn;
        k++;
    }
    return k;
}
int main(){

int k =9;
    printf("x(%d)=%d, %d \n", k , rec_b(k)), rec_c(k);
}