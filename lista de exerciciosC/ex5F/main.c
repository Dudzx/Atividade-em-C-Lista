#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // F) Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal.
    printf("Exercicio 4!\n");

  int main() {
    float base, altura, perimetro, area, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura); // perímetro
    printf("O perimetro do retangulo eh: %.2f\n", perimetro);

    area = base * altura; // Calcula a área
    printf("A area do retangulo eh: %.2f\n", area);

    diagonal = sqrt(pow(base, 2) + pow(altura, 2)); // teorema de Pitágoras
    printf("A diagonal do retangulo eh: %.2f\n", diagonal);

    return 0;
}
