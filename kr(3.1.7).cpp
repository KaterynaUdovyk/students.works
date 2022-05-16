//7) Задане натуральне число n. Надрукувати в заданій системі числення b цілі
//числа від 0 до n.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

static const char digs[16]={'0','1','2','3', '4','5',
                            '6','7','8','9', 'a','b',
                            'c', 'd','e', 'f'};

void toD(unsigned m, unsigned b){
    unsigned d;
    char c;
    char buf [100];
    int j=0;
    while(m>0){
        d = m%b;
        m/=b;
        c = digs[d];
        buf[j++]=c;
    }
    buf[j]='\0';
    puts(buf);

    for (int i=0; i<=j/2; i++){
        char tmp = buf[i];
        buf[i]= buf[j-i-1];
        buf[j-i-1]=tmp;
    }
}

int main(){

    unsigned n;
    unsigned b=0;

    printf("n=");
    scanf("%u",&n);
    do{
        printf("b=");
        scanf("%u", &b);
    } while (b<2 && b>16);
    for (unsigned i=1;i<n;++i){
        toD(i,b);
    }
}
