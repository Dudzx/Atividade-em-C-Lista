#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{
    // G) Ler com o raio de um círculo e mostrar o seu perímetro e área.
    printf("Exercicio 6!\n");
    float raio, perimetro, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    perimetro = 2 * PI * raio; // Calcula o perímetro
    printf("O perimetro do circulo eh: %.2f\n", perimetro);

    area = PI * raio * raio; // Calcula a área
    printf("A area do circulo eh: %.2f\n", area);

    return 0;
}
