#include<stdio.h>

int main(){
    int matriz[3][3]={0};
    int linha, coluna, digito;
    int contador[3]={0};
    int venceu = 0;
    for(int i=0; i<9 && venceu != 1; i++){
        scanf("%d %d %d", &linha, &coluna, &digito);
        matriz[linha][coluna] = digito;
        //conferidor de linha
    for(int g=0; g<3 && venceu!= 1; g++){
            for(int k=0; k<3; k++){
                contador[k]=0;
            }
                for(int w=0; w<3; w++){
                   int numero = matriz[g][w];
                   if(numero != 0){
                       contador[numero-1]++;
                   }
                if(contador[numero-1]==3){
                    printf("temos um vencedor");
                    venceu=1;
                    break;
                }
                }
            }
 }
    

        //conferidor de coluna
         for(int g=0; g<3 && venceu != 1; g++){
            for(int k=0; k<3; k++){
                contador[k]=0;
            }
                for(int w=0; w<3; w++){
                   int numero = matriz[w][g];
                   if(numero != 0){
                       contador[numero-1]++;
                   }
                if(contador[numero-1]==3){
                    printf("temos um vencedor");
                    venceu=1;
                    break;
                }
                }
            }
        //conferidor de diagonal
        if(matriz[0][0] == matriz [1][1] && matriz[1][1]== matriz[2][2] && matriz[1][1]!=0){
            venceu=1;
            printf("temos um vencedor");

        }
       if(matriz[2][0] == matriz [1][1] && matriz[0][2]== matriz[1][1] && matriz[1][1]!=0){
            venceu=1;
            printf("temos um vencedor"); 
 }
    
    }
    if(venceu==0){
        printf("deu velha");
    
    return 0;
}

       
