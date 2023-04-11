/* Leer un vector de registros (tabla) desde un archivo binario */
#include <stdio.h>
struct persona
{
    char    nombre[25];
    int     edad;
    float   peso;
    float   altura;

};

int main(){
    /* Variables */
    struct persona v[10];
    FILE *a;
    int n;
    n = 0;
    a = fopen("archper.dat", "rb");
    if(a != NULL) {
        /* Se lee una componente completa  sobre un elemento del arreglo,
        no es necesaria una variable auxiliar */
        fread(&v[0], sizeof(struct persona), 1, a);
        while(!feof(a) && n<10){
            n++;
            fread(&[n], sizeof(struct persona), 1, a);
        };
        fclose(a);
    };
    return 0;
}   /*Mosrar cartel archivo inexistente*/
