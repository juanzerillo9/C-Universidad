/*
Calcular el dinero que ingresa de la venta total del dia
*/
#include <stdio.h>

int main(){
    float ventaCliente, ventaTotal = 0;
    
    do {
        printf("Ingrese la venta: ");
        scanf("%f", &ventaCliente);
        ventaTotal += ventaCliente;
    }while(ventaCliente != 0);

    printf("La venta total del dia es: %4.2f", ventaTotal);

    return 0;
    
}