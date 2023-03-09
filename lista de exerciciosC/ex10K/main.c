#include <stdio.h>
#include <stdlib.h>

int main()
{
    // K) Ler a razão e o primeiro termo de uma PA e mostrar o seu decimo termo.
    printf("Exercicio 10!\n");

    int a1, r, an;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &a1);

    printf("Digite a razão da PA: ");
    scanf("%d", &r);

    //  décimo termo da PA
    an = a1 + 9 * r;

    printf("O décimo termo da PA é: %d\n", an);

    return 0;
}
