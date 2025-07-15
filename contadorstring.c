#include<stdio.h>
#include<string.h>
int contagem(char cadeia[128]){
    int contador;
    int auxiliar[128] = {0};
    for(int i=0; cadeia[i]!= '\0' ;i++ ){
        contador = cadeia[i];
        auxiliar[contador]++;
    }
    for(int g=0; g < 128; g++){
        printf("%d\n", auxiliar[g]);
    }
}

int main(){
   char cadeia[128] ;
   scanf("%s", cadeia);
   contagem(cadeia);
   return 0;
}
