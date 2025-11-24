#include <stdio.h>

int main(){
    int variavel;
    int ex2();

    printf("Digite o valor\n");
    scanf("%d", &variavel);

    switch (variavel){
    case 1:
        printf("Codigo a ser executado se variavel ==  1\n");
   
    break;

    case 2:
        printf("Codigo a ser executado se variavel ==  2\n");
    break;
    
    default:
        printf("Código a ser execcutado se variavel não for 1 nem 2\n");


}
}

