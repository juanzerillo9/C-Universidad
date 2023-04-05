#include <stdio.h>



int main(){
    int a, b;

    printf("Ingresar dos numeros: \n");
    scanf("%d %d", &a, &b);


    a += b;

    printf("la suma es %d\n", a);    
    
    // Incremento

    printf("a++ es igual a %d\n", a++);

    printf("++a es igual a %d\n", ++a);

    // Decremento

    printf("Puede ser: %d %d\n", a--, --a);
    printf("Ahora el valor de a es %d", a);

    // Puede ser antes o despues de una variable, ++a incrementa antes de usarla, ++a incrementa luego.

    return 0;

}

