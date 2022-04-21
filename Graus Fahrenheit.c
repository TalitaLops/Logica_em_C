#include <stdio.h>

int main(void) {
  float f, c;

  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f", &c);

  f = c * 1.8 + 32;

  printf("A temperatura em Fahrenheit é: %f \n", f);
  
  return 0;
}