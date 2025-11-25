#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao;
    int numeroSecreto, palpite;

    printf("Meu Principal \n");
    printf("1. Iniciar o Jogo \n");
    printf("2. Ver Regras \n");
    printf("3. Sair \n");
    printf("Escolha uma opção \n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numeroSecreto = rand() % 10; 
        printf("Digite um número de 0 a 9 \n");
        scanf("%d", &palpite);

        if(numeroSecreto == palpite){
            printf("Você acertou! \n");
            printf("Numero Secreto: %d \n", numeroSecreto);
        }else {
            printf("Você errou! \n");
            printf("Numero Secreto: %d \n", numeroSecreto);
        }
        
        break;
    case 2:
        printf("Regras do jogo: \n");
        printf("Escolha um número de 1 a 9 e tente adivinhar qual é o número sorteado.");
        break;
    case 3:
        printf("Saindo do jogo... \n");
        break;
    default:
        printf("Opção inválida! \n");
        break;
    }
}