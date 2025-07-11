#include <stdio.h>

int main()
{
    int matriz[5][5]={0};
    for(int i=0; i<5; i++){
        matriz[i][i] = 1;
    }
    for(int j=0; j<5; j++){
        for(int g=0; g<5; g++){
            printf("%d", matriz[j][g]);
        }
    }
    return 0;
}
