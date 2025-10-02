#include <stdio.h>

int main (){

int idade;
float altura;
char opcao;
char nome[20];

printf("Digite sua idade:\n");
scanf("%d", &idade);
printf("Sua idadade é:%d anos\n", idade);

printf("Digite sua altura:\n");
scanf ("%f", &altura);
printf("Sua altura é: %f\n", altura);

printf("Digite seu Nome: \n");
scanf("%s", &nome);
printf("Seu nome é: %s. Adorei! =)", nome);

/*Sintaxe Scanf:
scanf(''formato'', &variavel);

*/
};