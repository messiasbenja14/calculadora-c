#include <stdio.h>
#include "function_multiplicar.c"
#include "function_dividir.c"

int main()
{
    int opcao;
    int numero1, numero2, resultado;
    char continuar;

    continuar = 's';
    while (continuar == 's' || continuar == 'S') {
        printf("\n=== CALCULADORA ===\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%d", &numero1);
            printf("Digite o segundo numero: ");
            scanf("%d", &numero2);

            switch (opcao) {
                case 1:
                    resultado = numero1 + numero2;
                    printf("Resultado: %d\n", resultado);
                    break;
                case 2:
                    resultado = numero1 - numero2;
                    printf("Resultado: %d\n", resultado);
                    break;
                case 3:
                    resultado = multiplicar(numero1, numero2);
                    printf("Resultado: %d\n", resultado);
                    break;
                case 4:
                    resultado = dividir(numero1, numero2);
                    printf("Resultado: %d\n", resultado);
                    break;
            }
        } else {
            printf("Opcao indisponivel\n");
        }

        printf("Deseja executar outra operacao? (s/n): ");
        scanf(" %c", &continuar);
    }

    printf("Feito Por Gustavo Moraes Orlando");

    return 0;
}
