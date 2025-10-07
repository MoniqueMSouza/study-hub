#include <stdio.h>

int main (){
int a = 10;
float b = 3;
float quociente =(float) a / b; // 'a' é convertido explicitamente para float

printf("Soma: %.2f\n", quociente);

// casting explicito é o nome do "(float)"
return 0;
}