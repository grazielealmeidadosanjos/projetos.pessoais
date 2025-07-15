#include<stdio.h>

int main(){
    int matriz[10][15];
    int soma =0;
    int linha, coluna;
    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 15; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for(int i=0; i<10; i++){
            soma=0;
        
       for (int g=0; g<15; g++){
          soma = matriz[i][g] + soma;
       }
        printf("%d", soma);

    }
    return 0;
}
