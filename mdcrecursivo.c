#include<stdio.h>

int mdc(int x, int y){

    if(x==0){
        return y;
    }
    else{
    return mdc(x, x%y);
    }
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d",mdc(x,y));
    return 0;
}
