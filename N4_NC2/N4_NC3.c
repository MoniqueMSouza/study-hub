#include <stdio.h>

int main (){
    int a = 5;
    int b = -10;
    int c = 1;
    /*Precedência de operadores: Determina a ordem em que as operações são realizadas

    Primeiro será resolvido:
    a > 0 => Verdadeiro
    b < 0 => Verdadeiro
    Verdadeiro && Verdadeiro => Verdadeiro
    
    Então agora a operação ficou:
    Verdadeiro || c == 0

    Agora será resolvido:
    C == 0 => Falso

    Então:
    Verdadeiro || Falso => Verdadeiro

    */
    if(a > 0 && b < 0 || c == 0 ){
        printf("A condição é verdadeira \n");
    }else{
        printf("A condição é falsa \n");
    }
    

}
