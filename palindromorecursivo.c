#include<stdio.h>
#include<string.h>

int palindromo(char palavra[100], int inicio, int fim){
  if(inicio>=fim){
     return 0; //é palindromo
  }
  if (palavra[inicio]!= palavra[fim]){
     return 1; // não é 
  }
return palindromo(palavra, inicio++, fim--);
}

int main(){
  int palavra[100];
  int inicio=0;
  int fim= strlen(palavra)-1;

  if(palindromo(palavra,inicio,fim)==0){
   printf("é");
  }
  else{
     printf("n é");
  }
return 0;
  }
