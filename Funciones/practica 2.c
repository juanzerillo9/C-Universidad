/* 
calculadora con las 4 operaciones basicas.
*/
#include <stdio.h>
float calculadora(int num1, int num2, char operacion);


int main(){
    float resultado;
    char operacion;
    int num1, num2;
    printf("Ingrese la operacion a realizar (+ - * /):  ");
    scanf("%c",&operacion);

    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);
    
    resultado = calculadora(num1, num2, operacion);

    printf("El resultado es %3.2f", resultado);

    return 0;
}


float calculadora(int num1, int num2, char operacion){
    float resultado;
    switch (operacion)
    {
    case '+':
            resultado = num1 + num2;
        break;
    case '-':
            resultado = num1 - num2;
        break;
    case '*':
            resultado = num1 * num2;
        break;
    case '/':
            resultado = num1 / num2;
        break;
    };

    return resultado;
};