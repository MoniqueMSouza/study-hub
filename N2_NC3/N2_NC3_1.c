#include <stdio.h>

int main (){
/*
Soma (+)
Subtração (-)
Multiplicação (*)
Divisão (/)
 */

 int numero1, numero2;
 int soma, subtracao, multiplicacao, divisao;

 printf("Entre com o numero 1: \n");
 scanf("%d", &numero1);

 printf("Entre com o numero 2: \n");
 scanf("%d", &numero2);

 //Operação soma
 soma = numero1 + numero2;

//Operação subtração
 subtracao = numero1 - numero2;

 //Operação multiplicação
 multiplicacao = numero1 * numero2;

 //Operação divisão
 divisao = numero1 / numero2;

printf("A soma é igual: %d \n", soma);
printf("A subtracao é igual: %d \n", subtracao);
printf("A multiplicação é igual: %d \n", multiplicacao);
printf("A divisão é igual: %d \n", divisao);

}