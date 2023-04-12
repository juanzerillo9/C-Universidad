#include <stdio.h>

/*
Archivos
Abrir o Crear
Leer
Escribir
Cerrar
*/


int main(){
    // Abrir un archivo
    FILE* archivo = fopen("archivo.txt", "r");

    if(archivo == NULL)
    {
        printf("%s\n", "Error");
    }

    int char_leido;
    while((char_leido = fgetc(archivo)) != EOF){
        printf("Lei el char: %c\n", char_leido);
    }
    fclose(archivo);

    return 0;
}