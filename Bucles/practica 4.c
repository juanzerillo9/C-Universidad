/*
Programar una calculadora de interes compuesto!

Ejemplo de uso: 
Dinero Actual: $500.00
Dinero que se agrega anualmente: $1,000;
Cantidad de años a invertir:  30;
Interes anual: 10%
Resultado: $189,668.13;
*/

#include <stdio.h>


int main(){
    float actual, agregado, interes;

    int tiempo;

    printf("Bienvenido a la calculadora de interes compuesto!");

    printf("\nCuanto dinero hay en la cuenta actualmente?: ");
    scanf("%f", &actual);


    printf("Cuanto se va a agregar anualmente?: ");
    scanf("%f", &agregado);


    printf("Cuanto tiempo se planea invertir?: ");
    scanf("%d", &tiempo);

    printf("Cual es la tasa de interes anual?: ");
    scanf("%f", &interes);

    for(int i = 1; i <= tiempo; i++){
        actual+=agregado;

        actual += (actual *(interes/100));
    };

    printf("El total en la cuenta luego de %d años es de $%8.2f pesos", tiempo, actual);

    return 0;
}