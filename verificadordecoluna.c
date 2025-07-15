#include <stdio.h>

int main(){
    int matriz[9][9];
    int quantidade[9] = {0};
    int w;
    for(int i = 0; i < 9; i++){
        for(int g = 0; g < 9; g++){
            scanf("%d", &matriz[i][g]);
        }
    }
        for(int j = 0; j < 9; j++){
        for(int k = 0; k < 9; k++){
            quantidade[k] = 0;
        }

        for(w = 0; w < 9; w++){
            int numero = matriz[w][j];
            quantidade[numero - 1]++;
            if(quantidade[numero - 1] > 1){
                printf("linha inválida\n");
                break;
            }
        }
        
        if(j == 8){ 
            printf("linha válida\n");
        }
    }

    return 0;
}
