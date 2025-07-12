
#include <stdio.h>

int main()
{
    int matriz[20][20],x;
    scanf("%d", &x);
    for(int i=0; i<20; i++){
        for(int j=0; j<20; j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] == x){
                printf("%d linha %d coluna", i,j);
            }
            }
        }
    

    return 0;
}
