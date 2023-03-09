#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // H) Ler os valores dos catetos de um triângulo retângulo e mostrar a hipotenusa.
    printf("Exercicio 7!\n");

    float cateto1, cateto2, hipotenusa;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &cateto1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &cateto2);

    hipotenusa = sqrt(cateto1 * cateto1 + cateto2 * cateto2); // hipotenusa
    printf("A hipotenusa do triangulo retangulo eh: %.2f\n", hipotenusa);

    return 0;
}
