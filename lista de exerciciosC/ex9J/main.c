#include <stdio.h>
#include <stdlib.h>

int main()
{
    //J) Ler dois n�meros reais e salv�-los nas vari�veis A e B. Em seguida, troque dos valores das duas vari�veis de forma que a vari�vel A passe a ter o valor da vari�vel B e vice-versa. No final, mostre os valores finais.
    printf("Exercicio 9!\n");
   float a, b, temp;

    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);

    // Troca dos valores de A e B com vari�vel tempor�ria
    temp = a;
    a = b;
    b = temp;

    printf("Valores finais:\n");
    printf("A = %.2f\n", a);
    printf("B = %.2f\n", b);

    return 0;
}
