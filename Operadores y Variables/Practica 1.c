/* Realizar un programa que determine cual es la nota final de un alumno 
en una materia teniendo en cuenta que la nota final es el promedio de los dos examenes.*/

#include <stdio.h>

int main()
{
    float primerNota, segundaNota;
    printf("Ingrese la nota del primer examen: \n");
    scanf("%f", &primerNota);
    printf("Ingrese la nota del segundo examen: \n");
    scanf("%f", &segundaNota);
    
    float promedio;
    promedio = (primerNota + segundaNota)/2;
    printf("El promedio es %3.2f \n", promedio);

    if(promedio>=4)
    {
        printf("El alumno esta aprobado!\n");
    }
    else
    {
        printf("El usuario no esta probado!");
    }

    return 0;
}
