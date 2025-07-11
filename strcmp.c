#include <stdio.h>

int strcmpp(char R[100], char S[100]){
   for (int i = 0; R[i] != '\0' || S[i] != '\0'; i++) {
        if (R[i] != S[i]) {
            return 0;
        }
    }
    return 1;
}
   

int main()
{
    char R[100];
    char S[100];
    scanf("%s %s", R,S);
    printf("%d", strcmpp(R, S));
    return 0;
}
