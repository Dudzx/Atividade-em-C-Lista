#include <stdio.h>
#include <stdlib.h>

int main()
{
    // M) Ler o numerador e o denominador de uma fra��o e transform�-la em um n�mero decimal
    printf("Exercicio 12!\n");

     int num, den;
    float decimal;

    printf("Digite o numerador da fra��o: ");
    scanf("%d", &num);

    printf("Digite o denominador da fra��o: ");
    scanf("%d", &den);

    decimal = (float)num / den;

    printf("A fra��o %d/%d equivale ao n�mero decimal %.2f\n", num, den, decimal);

    return 0;
}
