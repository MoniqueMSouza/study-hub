#include <stdio.h>

int main (){
    int idade;
    float renda;
    int dependentes;

    printf("Digite sua idade \n");
    scanf("%d", &idade);

    printf("Digite sua renda \n");
    scanf("%f", &renda);

    printf("Digite o número de dependentes \n");
    scanf("%d", &dependentes);

    if(idade >= 18 && idade < 65){

        if(renda < 3000){

            if(dependentes > 2){
                
                printf("Você está apto a participar do programa de beneficiamento! \n");
            } else{
                printf("Você não atende aos critérios de dependentes! \n");
            }

        }else{
            printf("Você não atende aos critérios de renda! \n");
        }

    } else{
        printf("Você não atende ao critério de idade! \n");
    }

}