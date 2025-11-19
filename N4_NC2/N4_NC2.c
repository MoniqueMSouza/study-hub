#include <stdio.h>
int ou();
int nao();

int main (){

    int a = 10, b = 5;

    if(a > 0 && b > 0 ){
        printf("Operador &&: Ambos números são positivos! \n");
    }else{
        printf("Operador &&: Um dos números é negativo! \n");
    }

    ou();
    nao();
}

int ou (){
    
    int a = -10, b = -5;

    if(a > 0 || b > 0 ){
        printf("Operador ||: Pelo menos um dos números é positivo! \n");
    }else{
        printf("Operador ||: Os dois números são negativos \n");
    }

}

int nao(){
    int a = 0;

    if(!a){
        printf("Operador !: A variável A é zero.");
    } else{
        printf("Operador !: A variável A é diferente de zero");
    }

}