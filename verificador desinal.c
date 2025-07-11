#include <stdio.h>

int define(int n){
    scanf("%d", &n);
    if(n==0){
        return 0;
    }
    if (n>0){
        return 1;
    }
    if(n<0){
        return -1;
    }
}

int main (){
    int n;
    printf("%d", define(n));
    return 0;
}
