#include <stdio.h>
#include <string.h>

void codificar(char texto[], char str1[], char str2[]){
  for(int i=0;i<9;i++){
    char ct=texto[i];
    for (int e=0;e<3;e++){
      char p1=str1[e];
      char p2=str2[e];
      if(p1==ct){
        texto[i]=p2;
      }
      else if(p2==ct){
        texto[i]=p1;
      }
    }
  }
  printf("Texto : \n");
  printf("%s",texto);
}

void enigma(char nombreE[], char accion[], char palabra1[], char palabra2[], char nombreS[]) {
  
  printf("\n%s\n", nombreE);

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

  printf("\n%s\n", nombreS);
}

int main(void) {
  enigma("Hola.txt", "decode", "hola", "pipe", "Chao.txt");
  return 0;
}
