/*
Que rellene un array con los números pares comprendidos entre 1 y 100 y
 los muestre en pantalla en orden ascendente.
*/
#include <stdio.h>

int main(){
    int numeros[100];
    char flag;
    int s = 0;
    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0){
            numeros[s] = i;
            s++;
        }
    }

    for(int j = 0; j < s; j++){
        printf("%d \n", numeros[j]);
    }
    return 0;
}