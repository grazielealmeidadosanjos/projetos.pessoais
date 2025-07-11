#include <stdio.h>

float media(int a, int b, int c, char s){
    scanf("%d %d %d %c", &a,&b,&c,&s);
    if(s == 'A'){
        return (a + b + c)/3;
    }
    if(s == 'P'){
        return (a*5 + b*3 + c*2)/10;
    }
    if(s== 'H'){
        return 3/((1/a) + (1/b) + (1/c));
    }
}

int main(){
    int a,b,c;
    char s;
    printf("%lf", media(a,b,c,s));
    return 0;
}
