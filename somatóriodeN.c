#include <stdio.h>

int recebe(int N){
    if(N==0) return 0;
    return N + recebe(N -1);
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d", recebe(N));
    return 0;
}
