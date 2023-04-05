/*
Todos  los numeros pares del 1 al 100
*/
#include <stdio.h>
int main(){
    for(int i = 0; i<100; i++){
        if(i%2 == 0){
            printf("El numero %d \n", i);
        }
    }
    return 0;
}