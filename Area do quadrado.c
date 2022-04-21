#include <stdio.h>

int main(void){
    int lado, area;
    printf("Valor do lado do quadrado: ");
    scanf("%d", &lado);

    area = lado * lado;

    printf("A área do quadrado é: %d \n", area);

    return 0;
}