/* 
Que rellene un array con los 100 primeros números enteros y los muestre en pantalla en orden descendente. 
*/
#include <stdio.h>

int main(){
    int numeros[100];

    /* Carga vector */
    for(int i = 0; i < 100 ; i++){
        numeros[i] = i+1;
    }

    /* Imprime Vector pero en orden descendente */
    for(int j = 99; j >= 0; j--){
        printf("%d \n", numeros[j]);
    }
    
    return 0;
}