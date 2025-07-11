
#include <stdio.h>

int main()
{
    int matriz[6][6],n;
    n=0;
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j]>=10){
                n++;
            }
        }
    }
    printf("%d", n);
    
    return 0;
}
