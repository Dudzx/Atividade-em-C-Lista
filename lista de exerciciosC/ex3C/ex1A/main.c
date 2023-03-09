#include <stdio.h>
#include <stdlib.h>

int main()
{
    // A) Calcule a média aritmética de quatro números inteiros dados.
    printf("Exercicio 1\n");
       int num1, num2, num3, num4;
    float media;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    printf("Digite o quarto número: ");
    scanf("%d", &num4);

    media = (float)(num1 + num2 + num3 + num4) / 4;

    printf("A média dos números é %.2f\n", media);

    return 0;
}
