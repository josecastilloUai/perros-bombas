#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int requisito(char str1[], char str2[]){
  
  int len1 = strlen(str1);
  int len2 = strlen(str2);
  int i,j;
  int pass = 0;
  
  if(len1==len2 && len1==5){
    for(j=0; j<5; j++){
      if (pass==1){
        break;
      }
      for(i=0; i<5; i++){

        int r = isupper(str1[i]);
        int r2 = isupper(str2[j]);

        if (r ==  256 || r2 ==256){
          if (tolower(str1[i])==tolower(str2[j])){
            printf("Te equivocaste");
            pass = 1;
            break;
          }
        }

        else{
          if (str1[i] == str2[j]){
            printf("Te equivocaste");
            pass = 1;
            break;
          }
        }
      }
    }
  }
  return pass;
}

void enigma(char nombreE[], char accion[], char palabra1[], char palabra2[], char nombreS[]) {
  
  printf("\n%s\n", nombreE);

  int corroborar = requisito(palabra1, palabra2);
  
  if (corroborar==0){
    
    int valor = strcmp(accion, "encode");
    int valor2 = strcmp(accion, "decode");
      
    if (valor==0){
      printf("encode");
      }
    if (valor2==0){
      printf("decode");
      }
    if (valor!=0 && valor2!=0) {
      printf("Error, corralo de nuevo");
      }
      printf("\n%s\n\n", nombreS);
  }
}
  
int main(void) {
  enigma("Hola.txt", "decode", "qwerv", "Tsdfg",   "Chao.txt");
  return 0;
}
