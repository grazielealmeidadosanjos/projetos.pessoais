#include <stdio.h>

int absoluto(int n){
    if(n<0){
        return n= n*-1;
    }
    return n;
}

int main(){
    int n,i;
    for(i=0;i<6;i++){
        scanf("%d", &n);
        printf("%d",absoluto(n));
        
    }
return 0;
}


