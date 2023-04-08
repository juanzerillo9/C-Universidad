/*
Ejercicio: Que rellene un array con los 100 primeros números enteros y los muestre en pantalla en orden ascendente.
*/
#include <stdio.h>

int main(){
    int numeros[100];

    /* Rellena Vector */
    for( int i = 0; i<100; i++){
        numeros[i] = i + 1;
    };

    /* Imprime Vector */
    for(int j = 0; j < 100; j++){
        printf("%d \n", numeros[j]);
    }

    return 0;
}