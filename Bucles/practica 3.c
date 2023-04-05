/*
Tablas de multiplicar
*/
#include <stdio.h>

int main(){
    int tabla, result;

    printf("Ingresar al tabla del numero a imprimir: ");
    scanf("%d", &tabla);

    for(int i = 0; i <= 10; i++){
        result = tabla * i;
        printf("%d x %d = %d \n",tabla, i, result);
    }

    return 0;
}