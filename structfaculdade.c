#include<stdio.h>

struct faculdade{
    char nome[10];
    float cr;
    int semestre;
    
};

int main(){
    struct faculdade aluno;
    scanf("%f", &aluno.cr);
    printf("%f", aluno.cr);
    return 0;
    
}
