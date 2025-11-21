#include <stdio.h>

int main(){
    int numero;

    printf("Digite um número: \n");
    scanf("%d", &numero);

    if (numero > 0){
        if(numero % 2 == 0 ){
            printf("Número é Positivo e Par \n");
        }else{
            printf("Número é Positivo e Ímpar \n");
        }
    }else if (numero == 0) {
        printf("Número é Zero");
    }else{
        printf("Número Negativo");
    }

}