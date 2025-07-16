#include<stdio.h>
#include<string.h>

int main (){
char normal[100];
char invertida[100];
int inicio = 0;
scanf("%s", normal);
int tamanho = strlen(normal);
for(int i= tamanho-1; i>=0; i--){
    invertida[inicio]= normal[i];
    inicio ++;
}
invertida[tamanho]='\0';
printf("%s", invertida);
return 0;
}
