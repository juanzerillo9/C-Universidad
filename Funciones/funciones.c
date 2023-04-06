/*

FUNCION

tipo nombreFuncion(tipo var){
    Accion...
}

nombreFuncion(var) --> Llamada a la funcion

*/

/*

Realizar una funcion que calcule el area de un triangulo.

*/

#include <stdio.h>

float areaTriangulo(int base, int altura);


int main(){
    float area1, area2, area3;

/*Reutilizacion de funciones*/
    area1 = areaTriangulo(4, 7);
    area2 = areaTriangulo(3, 67);
    area3 = areaTriangulo(5, 10);   

    printf("El primer area es %3.2f, la segunda %3.2f, y la tercera %3.2f", area1, area2, area3);

    return 0;
};

float areaTriangulo(int base, int altura){
    float area;

    area = (base * altura) / 2;

    return area;
};