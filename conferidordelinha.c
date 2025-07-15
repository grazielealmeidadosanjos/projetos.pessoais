#include<stdio.h>

int main(){
    int matriz[9][9];
    int quantidade[9]={0};
    int w;
    for(int i=0; i<9; i++){
        for(int g=0; g<9;g++){
            scanf("%d", &matriz[i][g]);
        }
    }
    
    //conferir linha n tem nada repetido
    for(int j=0; j<9; j++){
        for(w=0; w<9; w++){
        int numero = matriz [j][w];
        quantidade[numero-1]++;
        if(quantidade[numero-1]>1){
            printf("linha inválida\n");
            break;
        }
        }
        if(w == 8){
                printf("linha válida\n");
            }
    }
        return 0;
}
