#include <stdio.h>
#include <string.h>

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
