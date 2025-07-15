#include<stdio.h>

int main(){
    int matriz[3][3];
    for(int i=0; i<3; i++){
        for(int g=0; g<3; g++){
            scanf("%d", &matriz[i][g]);
        }
    }
    for(int i=0; i<3; i++){
        for(int g=0; g<3; g++){
            printf("%d", matriz[i][g]);
        }
    }
    return 0;
}
