#include <stdio.h>

int main()
{
int vetor[100];
int quantidade[100]= {0};
int numero;

for(int i=0; i<100; i++){
    scanf("%d", &vetor[i]);
    numero = vetor[i];
    quantidade[numero]++;
}
for(int g=0; g<100; g++){
    printf("%d\n", quantidade[g]);
}
    return 0;
}
