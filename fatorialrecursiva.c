#include <stdio.h>

int fatorial(int N){
    if(N == 0){
        return 1;
    }
    if(N>0){
        return fatorial(N-1)*N;
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d", fatorial(N));

    return 0;
}
