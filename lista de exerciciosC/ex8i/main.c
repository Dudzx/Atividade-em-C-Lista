#include <stdio.h>
#include <stdlib.h>

int main()
{
    // i) Pedro comprou um saco de Ra��o com peso em quilos. Pedro possui 2 (dois) gatos para os quais fornece a quantidade de ra��o em gramas. Fa�a um algoritmo que receba o peso do Saco de ra��o e a quantidade de ra��o fornecida para cada gato. Calcule e mostre quanto restar� de ra��o no saco ap�s 5 (cinco) dias
    printf("Exercicio 8!\n");
    float pesoRacao, qtdGato1, qtdGato2, qtdTotal;
    int dias = 5;

    printf("Digite o peso do saco de racao (em quilos): ");
    scanf("%f", &pesoRacao);

    printf("Digite a quantidade de racao fornecida ao gato 1 (em gramas): ");
    scanf("%f", &qtdGato1);

    printf("Digite a quantidade de racao fornecida ao gato 2 (em gramas): ");
    scanf("%f", &qtdGato2);

    qtdTotal = (qtdGato1 + qtdGato2) * dias / 1000.0; // quantidade total de ra��o consumida pelos gatos em kg
    printf("Quantidade total de racao consumida em 5 dias: %.2f kg\n", qtdTotal);

    float restante = pesoRacao - qtdTotal; // quantidade de ra��o restante no saco
    printf("Quantidade de racao restante no saco: %.2f kg\n", restante);

    return 0;
}
