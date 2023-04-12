#include <stdio.h>

int main(){
    FILE* archivo = fopen("archivo.txt", "r");

    if(archivo == NULL){
        printf("Error de lectura de archivo!\n");
    }

    int tam_buffer = 16;
    char cadena[tam_buffer];

    while( fgets(cadena, tam_buffer, archivo) != NULL){
        printf("Leimos: %s\n", cadena);
    }

    fclose(archivo);
    return 0;
}