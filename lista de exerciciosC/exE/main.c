#include <stdio.h>
#include <stdlib.h>

int main()
{
    // E) Sabendo que 100 kilowatt de energia custa um s�timo do sal�rio m�nimo, fa�a um algoritmo que leia o valor do sal�rio m�nimo e a quantidade de kilowatt gasta por uma resid�ncia, calcule e mostre: o valor em reais de cada kilowatt; o valor em reais a ser pago; e o novo valor a ser pago por essa resid�ncia com um desconto de 10%.
    printf("Hello world!\n");
 float salario_minimo, valor_kilowatt, valor_total, valor_desconto;
    int kilowatts;

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    valor_kilowatt = salario_minimo / 7 / 100; // reais de cada kilowatt
    printf("O valor em reais de cada kilowatt eh: R$ %.2f\n", valor_kilowatt);

    printf("Digite a quantidade de kilowatts consumidos pela residencia: ");
    scanf("%d", &kilowatts);

    valor_total = kilowatts * valor_kilowatt; // total em reais a ser pago
    printf("O valor em reais a ser pago eh: R$ %.2f\n", valor_total);

    valor_desconto = valor_total * 0.1; // desconto de 10%
    printf("O valor em reais a ser pago com desconto de 10%% eh: R$ %.2f\n", valor_total - valor_desconto);

    return 0;
}
