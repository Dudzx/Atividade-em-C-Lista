#include <stdio.h>
#include <stdlib.h>

int main()
{
    // L) Ler a razão e o primeiro termo de uma PG e mostrar o seu quinto termo.
    printf("Exercicio 11!\n");

    int a1, q, an;

    printf("Digite o primeiro termo da PG: ");
    scanf("%d", &a1);

    printf("Digite a razão da PG: ");
    scanf("%d", &q);

    // quinto termo da PG
    an = a1 * q * q * q * q;

    printf("O quinto termo da PG é: %d\n", an);

    return 0;
}
