#include<stdio.h>

int numeros(int n){
    if(n==0){
      printf("%d", n);
    }
    if(n%2==0){
    printf("%d", n);
    }
    
    return numeros(n-1);
}

int main(){
    int n;
    scanf("%d", &n);
    numeros(n);
    return 0;
}
