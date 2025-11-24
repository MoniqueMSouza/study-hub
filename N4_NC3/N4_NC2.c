#include <stdio.h>

int main(){
    int opcao;
    float saldo = 1000.00;
    float deposito;
    float saque;
    float saldofinal;

    printf("Escolha uma opção: \n");
    printf("1. Verificar Saldo \n");
    printf("2. Fazer depósito \n");
    printf("3. Fazer saque \n");

    scanf("%d", &opcao);

    switch (opcao){
        case 1:
            printf("O seu saldo é: R$%.2f \n", saldo);
        break;
        case 2:
            printf("Digite o valor que você deseja depositar: \n");
            scanf("%f", &deposito);

        saldofinal = saldo + deposito;

            printf("Depósito feito com sucesso! Seu saldo final é: %.2f", saldofinal);


        break;
        case 3:
            printf("Digite o valor que você deseja sacar:");
            scanf("%f", &saque);

        saldofinal = saldo - saque;

            printf("Saque feito com sucesso! Seu saldo final é: %.2f", saldofinal);

        break;
        default:
        printf("Opção inválida!");
    }
}