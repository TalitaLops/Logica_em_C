#include <stdio.h>

int main(void) {
  float real, dolar;

  printf("Digite o valor em reais: ");
  scanf("%f", &real);

  dolar = real * 0.2143;

  printf("O valor em doláres é: %.2f \n", dolar);
  
  return 0;
}