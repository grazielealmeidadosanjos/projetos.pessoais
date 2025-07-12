#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char matriz[3][3] = {'-', '-', '-',
                     '-', '-', '-',
                     '-', '-', '-'};
    int totaljogadas=0;
    int vencedor=0;
    char jogada;
    int linha;
    int coluna;
    char vez='0';
    do{
      printf("Agora é a vez do: %c.\n", vez);
      totaljogadas=0;
      
      if(vez=='0'){

      do{
      printf("Linha a ser jogada: ");    
      scanf("%d", &linha);
      if((linha>3)||(linha<1))printf("Linha invalida. Digite um valor de 1 a 3.\n");
      }while((linha>3)||(linha<1));
      do{
      printf("Coluna a ser jogada: ");
      scanf("%d", &coluna);
      if((coluna>3)||(coluna<1))printf("Coluna invalida. Digite um valor de 1 a 3.\n");
      }while((coluna>3)||(coluna<1));
    
      };
      
      if(vez=='X'){
      srand(time(NULL));
      linha = (rand() % 3) + 1;
      coluna = (rand() % 3) + 1;  
      };
      
      if(matriz[linha-1][coluna-1]=='-'){
          matriz[linha-1][coluna-1]=vez;
          if(vez=='0')vez='X';
          else if(vez=='X')vez='0';
      
      }
      else printf("Posição já preenchida. Escolha outra posição.\n");
     
       for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%4c", matriz[i][j]);
            
            if(matriz[i][j]!='-') totaljogadas++;  
            
        };
        printf("\n");

       };
    
        
    if((matriz[0][0]==matriz[0][1])&&(matriz[0][0]==matriz[0][2])&&(matriz[0][0]!='-')){
        vencedor=1;
        printf("Vencedor......%c.\n",matriz[0][0]);
    }; 
    if((matriz[1][0]==matriz[1][1])&&(matriz[1][0]==matriz[1][2])&&(matriz[1][0]!='-')){
        vencedor=1;
        printf("Vencedor......%c.\n",matriz[1][0]);
    }; 
       if((matriz[2][0]==matriz[2][1])&&(matriz[2][0]==matriz[2][2])&&(matriz[2][0]!='-')){
        vencedor=1;
        printf("Vencedor......%c.\n",matriz[2][0]);
    }; 
       if((matriz[0][0]==matriz[1][0])&&(matriz[0][0]==matriz[2][0])&&(matriz[0][0]!='-')){
        vencedor=1;
        printf("Vencedor......%c.\n",matriz[0][0]);
    }; 
       if((matriz[0][1]==matriz[1][1])&&(matriz[0][1]==matriz[2][1])&&(matriz[0][1]!='-')){
        vencedor=1;
        printf("Vencedor......%c.\n",matriz[0][1]);
    }; 
       if((matriz[0][2]==matriz[1][2])&&(matriz[0][2]==matriz[2][2])&&(matriz[0][2]!='-')){
        vencedor=1;
        printf("Vencedor......%c.",matriz[0][2]);
    }; 
      
      
      
       if((matriz[0][0]==matriz[1][1])&&(matriz[2][2]==matriz[0][0])&&(matriz[0][0]!='-')){
        vencedor=1;
        printf("Vencedor......%c.",matriz[0][0]);
    };
      
      
       if((matriz[2][0]==matriz[1][1])&&(matriz[0][2]==matriz[2][0])&&(matriz[2][0]!='-')){
        vencedor=1;
        printf("Vencedor......%c.",matriz[2][0]);
    };
      
      if((totaljogadas==9)&&(vencedor==0)) printf("Sem vencedor");
        
    }while((vencedor==0)&&(totaljogadas!=9));



    return 0;
}
