#include<stdio.h>

int main(){
    int matriz[3][3];
    int transposta[3][3]={0};
    for(int i=0; i<3; i++){
        for(int g=0; g<3; g++){
            scanf("%d", &matriz[i][g]);
        }
    }
    for(int i=0; i<3; i++){
        for(int g=0; g<3; g++){
            transposta[g][i] = matriz [i][g];
        }
    }
    for(int i=0; i<3; i++){
        for(int g=0; g<3; g++){
            printf("%d\n",transposta[i][g]);
        }
    }
    for(int i=0; i<3; i++){
        for(int g=0; g<3; g++){
            printf("%d\n", matriz[i][g]);
        }
    }
    return 0;
}
