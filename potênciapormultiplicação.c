#include <stdio.h>

int pot(int k, int n){ // n é o expoente
    if (n == 0){
        return 1;
    }
    else{
        return k * pot(k, n - 1);
    }
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d\n", pot(n, k));
    return 0;
}
