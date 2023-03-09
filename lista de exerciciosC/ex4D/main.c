#include <stdio.h>
#include <stdlib.h>

int main()
{
    // D) Ler do teclado um número inteiro com três dígitos (no formato CDU - centena, dezena e unidade) e mostrar o número invertido (no formato UDC). O número invertido deve ser armazenado em outra variável antes de ser mostrado
    printf("Exercicio 4!\n");

  int cdu, c, d, u, udc;

    printf("Digite um numero inteiro com tres digitos (CDU): ");
    scanf("%d", &cdu);

    // Separa as centenas, dezenas e unidades
    c = cdu / 100;
    d = (cdu % 100) / 10;
    u = cdu % 10;

    // Inverte as unidades, dezenas e centenas para formar o número UDC
    udc = u * 100 + d * 10 + c;

    printf("O numero invertido eh: %d\n", udc);

    return 0;
}
