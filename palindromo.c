#include <stdio.h>
#include<string.h>

int palindromo(char palavra[100]){
    int tamanho,inicio;
    inicio=0;
    char auxiliar[100];
    auxiliar[100];
    tamanho = strlen (palavra);
    printf("%d", tamanho);
    for(int i=tamanho-1; i>=0; i--){
        auxiliar[inicio] =palavra[i];
        inicio++;
                }
    auxiliar[tamanho]='\0';
    
    if(strcmp(palavra, auxiliar)==0){
        return 1;
    }
    else{
        return 0;
    }
    }
       

int main()
{
    char palavra[100];
    scanf("%s", palavra);
    printf("%d", palindromo(palavra));
    return 0;
}
