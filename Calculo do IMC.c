#include <stdio.h>

int main(void) {
  float peso, altura, imc;
  

  printf("Digite seu peso: ");
  scanf("%f", &peso);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  imc = peso / (altura*altura);
  
  printf("O resultado do IMC foi: %f \n", imc);
  
  return 0;
}