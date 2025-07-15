#include<stdio.h>
#include<string.h>

int palindromo(char palavra[100]){
    char auxiliar[100];
    int inicio =0;
    int contador;
    contador = strlen(palavra);
    for(int i=contador-1; palavra[i]!= '\0';i--){
        auxiliar[i] = palavra [inicio];
        inicio++;
    }
   auxiliar[contador]= '\0';
   if(strcmp(palavra,auxiliar) == 0){
       printf("é um palindromo");
   }
   else{
       printf("não é um palindromo");
   }
}

int main(){
    char palavra[100];
    scanf("%s", palavra);
    palindromo(palavra);
    return 0;
}
