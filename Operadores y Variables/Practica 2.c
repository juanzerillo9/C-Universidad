/*
Escriba un programa en el que se pida ingresar numeros entre 1 y 7.
Segun el numero elegido va a representar un dia de la semana.
*/
#include <stdio.h>

int main(){
    int dia;
    printf("Ingrese un dia entre 1 y 7: ");
    scanf("%d",&dia);
    switch(dia){
        case 1: 
            printf("Hoy es dia Lunes!");
            break;
        case 2: 
            printf("Hoy es dia Martes!");
            break;
        case 3: 
            printf("Hoy es dia Miercoles");
            break;
        case 4: 
            printf("Hoy es dia Jueves");
            break;
        case 5: 
            printf("Hoy es dia Viernes");
            break;
        case 6: 
            printf("Hoy es dia Sabado");
            break;
        case 7: 
            printf("Hoy es dia Domingo");
            break;
    }
}