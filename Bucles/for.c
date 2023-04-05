/*
Realice un programa que calcule el promedio de la nota de 10 estudiantes en un examen final
*/

#include <stdio.h>

int main(){
    float nota, total = 0;
    int i; 
    for(i=0; i<10; i++){
        printf("Ingrese la nota del alumno: ");
        scanf("%f", &nota);

        total += nota;

    }
    total /= 10;
    printf("El promedio entre los 10 alumnos es de: %2.2f", total);
    return 0;
}