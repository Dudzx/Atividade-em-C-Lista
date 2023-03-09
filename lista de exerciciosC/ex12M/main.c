#include <stdio.h>
#include <stdlib.h>

int main()
{
    // M) Ler o numerador e o denominador de uma fração e transformá-la em um número decimal
    printf("Exercicio 12!\n");

     int num, den;
    float decimal;

    printf("Digite o numerador da fração: ");
    scanf("%d", &num);

    printf("Digite o denominador da fração: ");
    scanf("%d", &den);

    decimal = (float)num / den;

    printf("A fração %d/%d equivale ao número decimal %.2f\n", num, den, decimal);

    return 0;
}
