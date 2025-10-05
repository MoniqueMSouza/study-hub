#include <stdio.h>

int main (){
/*
Incremento (++)
Pré-Incremento ++a
Pós-Incremento a++
Decremento (--)
Pré-Decremento --a
Pós-Decremento a--
*/

int numero1 = 1, resultado;

//Incremento
printf("Antes incremento: %d \n", numero1);
numero1++;
printf("Depois incremento: %d \n", numero1);

//Pós Incremento
resultado = numero1++;
printf("Depois do pós-incremento: resultado = %d ; numero1 = %d \n", resultado, numero1);

//Pré Incremento
resultado = ++numero1;
printf("Depois do pré-incremento: resultado = %d ; numero1 = %d \n", resultado, numero1);

//Decremento
numero1--;
printf("Depois decremento: %d \n", numero1);

//Pós Decremento
resultado = numero1--;
printf("Depois do pós-decremento: resultado = %d ; numero1 = %d \n", resultado, numero1);

//Pré Decremento
resultado = --numero1;
printf("Depois do pré-decremento: resultado = %d ; numero1 = %d \n", resultado, numero1);

}
