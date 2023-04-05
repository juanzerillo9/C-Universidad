#include <stdio.h>

int main (){
    int contador = 0;

    do {
        contador++;
        printf("contador = %d \n", contador);
    }while(contador< 10);
    
    return 0;
}