#include <stdio.h>
#include <stdlib.h>

int main()
{
    //N) Ler um valor de hora (e minuto), calcular e mostrar quantos minutos se passaram desde o in�cio do dia.
    printf("Exercicio 13\n");

    int hora, minuto, minutos_passados;

    printf("Digite a hora (formato 24h): ");
    scanf("%d", &hora);

    printf("Digite o minuto: ");
    scanf("%d", &minuto);

    minutos_passados = hora * 60 + minuto;

    printf("Desde o in�cio do dia, j� se passaram %d minutos.\n", minutos_passados);

    return 0;
}
