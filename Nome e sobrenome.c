#include <stdio.h>

int main(void) {
  char nome [10] = "Talita";
  printf("%s \n", nome);
  
  char sobrenome;
  printf("Digite seu sobrenome: ");
  scanf("%s", &sobrenome);
  
  return 0;
}