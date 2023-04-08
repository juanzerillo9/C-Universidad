/*
Que lea 10 números por teclado, 
los almacene en un array y muestre la suma, 
resta, multiplicación y división de todos.
*/\

#include <stdio.h>
int suma(int* numeros, int tam);
int resta(int* numeros, int tam);
float divis(int* numeros, int tam);
int multiplicacion(int* numeros, int tam);


int main(){
    int tam = 10;
    int numeros[tam];
    for(int i = 0; i < tam ; i++){
        printf("Ingrese el numero de la posicion %d: ", i+1);
        scanf("%d", &numeros[i]);
    };
    int sum = suma(numeros, tam);
    int rest = resta(numeros, tam);
    int multiplic = multiplicacion(numeros, tam);
    float div = divis(numeros, tam);

    printf("La suma de todos es: %d", sum);
    printf("La resta de todos es: %d", sum);
    printf("La multiplicacion de todos es: %d", sum);
    printf("La division de todos es: %f", div);

    return 0;
}

int suma(int* numeros, int tam){
    int acum;
    for(int j = 0; j < tam; j++){
        acum+=numeros[j];
    }
    return acum;
}

int resta(int* numeros, int tam){
    int acum2;
    for(int a = 0; a < tam; a++){
        acum2-=numeros[a];
    }
    return acum2;
}

float divis(int* numeros, int tam){
    float acum3;
    for(int s = 0; s < tam; s++){
        acum3*=numeros[s];
    }
    return acum3;
}

int multiplicacion(int* numeros, int tam){
    int acum4;
    for(int k = 0; k < tam; k++){
        acum4/=numeros[k];
    }
    return acum4;
}

