#include <stdio.h>
#include <stdlib.h>

int main()
{
    // C) Leia uma temperatura dada na escala Celsius (C) e imprima o equivalente em Fahrenheit (F). Fórmula de conversão: F = 9/5 * C + 32
    printf("Exercicio 3!\n");

   float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (1.8*9.0/5.0) * celsius + 32;

    printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
