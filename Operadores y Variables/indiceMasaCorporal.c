/*

BMI = Weight / Height2

*/

#include <stdio.h>

int  main()
{
    float peso, altura, imc;
    printf("Ingrese su peso: ");
    scanf("%f", &peso);

    printf("Ingrese su altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if(imc<18.5){
        printf("Tu imc esta por debajo de lo normal \n");
    }
    else if(imc<25){
        printf("Tu imc es saludable! \n");
    }
    else if(imc < 30){
        printf("Tu IMC indica sobrepeso!! \n");
    }
    else{
        printf("Tu IMC indica obesidad! \n");
    }

    printf("su imc es: %f", imc);
    return 0;
}
