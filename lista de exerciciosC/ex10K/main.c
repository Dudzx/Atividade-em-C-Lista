#include <stdio.h>
#include <stdlib.h>

int main()
{
    // K) Ler a raz�o e o primeiro termo de uma PA e mostrar o seu decimo termo.
    printf("Exercicio 10!\n");

    int a1, r, an;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &a1);

    printf("Digite a raz�o da PA: ");
    scanf("%d", &r);

    //  d�cimo termo da PA
    an = a1 + 9 * r;

    printf("O d�cimo termo da PA �: %d\n", an);

    return 0;
}
