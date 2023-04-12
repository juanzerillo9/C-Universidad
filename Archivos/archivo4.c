#include <stdio.h>
#include <string.h>
int main(){
    FILE* archivo = fopen("escritura.txt", "w");

    if(archivo == NULL){
        printf("Error de lectura de archivo!\n");
    }

    int tam_buffer = 16;
    char cadena[tam_buffer];

    strcpy(cadena, "hola");

    fputs(cadena, archivo);

    fclose(archivo);
    return 0;
}