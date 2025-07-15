int strlenn(char R[100]){
    int n=0;//quantidade
    for(int i=0; i<100; i++){
        if(R[i]== '\0'){//string sempre termina com /0
            break;//para o programa porque chegou no fim da string
        }
        n++;
    }
    return n;
}

#include <stdio.h>
int main()
{
    char R[100];
    int n, x;
    n=0;
    scanf("%s", R);
    printf("%d", strlenn(R));
    return 0;
}
