#include <stdio.h>

char strcpyy(char R[100], char S[100]){
   for (int i = 0; R[i] != '\0' || S[i] != '\0'; i++) {
        R[i]= S[i];
        if (S[i] == '\0') {
            break; // Parar após o ultimo caracter
        }
   }
}


int main()
{
    char R[100];
    char S[100];
    scanf("%s %s", R,S);
    strcpyy(R, S);
    printf("%s", R);
    return 0;
}
