#include <stdio.h>

int main(void) {
  int ladoA, ladoB, area;
  printf("Valor do lado do retângulo: ");
  scanf("%d",&ladoA);
  printf("Valor do lado outro lado do retângulo: ");
  scanf("%d", &ladoB);
  area = ladoA * ladoB;

  printf("Área do retângulo é: %d \n", area);

  return 0;
}