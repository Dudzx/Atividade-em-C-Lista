#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    // F) Ler a base e a altura de um ret�ngulo e mostrar o seu per�metro, �rea e diagonal.
    printf("Exercicio 4!\n");

  int main() {
    float base, altura, perimetro, area, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura); // per�metro
    printf("O perimetro do retangulo eh: %.2f\n", perimetro);

    area = base * altura; // Calcula a �rea
    printf("A area do retangulo eh: %.2f\n", area);

    diagonal = sqrt(pow(base, 2) + pow(altura, 2)); // teorema de Pit�goras
    printf("A diagonal do retangulo eh: %.2f\n", diagonal);

    return 0;
}
