#include<stdio.h>

struct pessoa {
   char nome[20];
   int idade;
   char endereço[30];
};


int main (){
    struct pessoa eu;
    scanf("%s", eu.nome);
    scanf("%d", &eu.idade);
    scanf("%s", eu.endereço);
    printf("%s\n %d\n  %s\n", eu.nome, eu.idade, eu.endereço);
    return 0;
}
