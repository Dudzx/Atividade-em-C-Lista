#include <stdio.h>
#include <stdlib.h>

int main()
{
    // A) Calcule a m�dia aritm�tica de quatro n�meros inteiros dados.
    printf("Exercicio 1\n");
       int num1, num2, num3, num4;
    float media;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);
    printf("Digite o quarto n�mero: ");
    scanf("%d", &num4);

    media = (float)(num1 + num2 + num3 + num4) / 4;

    printf("A m�dia dos n�meros � %.2f\n", media);

    return 0;
}
