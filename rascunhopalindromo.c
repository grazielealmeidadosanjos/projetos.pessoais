#include <stdio.h>
#include<string.h>

int palindromo(char palavra[100]){
    int tamanho;
    tamanho = strlen (palavra);
    printf("%d", tamanho);
        for(int i=tamanho; i>=0; i--){
        for(int g=0; i<=tamanho; i++){
            if (palavra[i]!= palavra[g]){
                return 0;
            }
        
        }
       }
       return 1;
    }



int main()
{
    char palavra[100];
    scanf("%s", palavra);
    printf("%d", palindromo(palavra));
    return 0;
}
