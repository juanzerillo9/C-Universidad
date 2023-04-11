#include <stdio.h>
int main()
{
    int a[10];
    for(int i = 0; i < 10; i++){
        printf("Ingresar un numero: ");
        scanf("%d", &a[i]);
    };

   for (int i = 0; i < 10; i++)
   {
        printf("Numero: %d \n", a[i]);
   }
    
    return 0;
}