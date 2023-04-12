#include <stdio.h>
#include <stdlib.h>

int main(){
    // Abrir el archivo
    FILE* archivo = fopen("datos.txt", "rb");

    // Leer caracter por caracter
    if(archivo == NULL){
        perror("Error en la lectura!");
        return 1;
    }
    
    // Leer y almacenar en variables
    /*
    int numero;
    char cadena[10];
    
    while(feof(archivo)==0){
        fscanf(archivo, "%d %s", &numero, &cadena);
        numero *= 10;
        printf("%d %s\n", numero, cadena);
    }
    */ 


   // Leer y mostrar por pantalla
    /*char caracter;
    
    while(feof(archivo) == 0){
        caracter = fgetc(archivo);
        printf("%c", caracter);
    }
    */

    // Leer y almacenar en arreglo?
    fseek(archivo, 0, SEEK_END); // Mover lectura al final del Archivo
    int num_elementos = ftell(archivo); // Cuantos caracteres tiene el archivo?
    rewind(archivo); // Vuelve el archivo al principio


    // Arreglo de caracteres dinamico de caracteres
    char * cadena = (char *) calloc(sizeof(char), num_elementos);
    if(cadena == NULL){
        perror("Error en reserva de memoria");
        return 2;
    }
    
    int num_elementos_leidos = fread(cadena, (sizeof(char)), num_elementos, archivo);
    if(num_elementos_leidos != num_elementos){
        perror("Error leyendo el archivo");
        return 3;
    }

    printf(cadena);


    fclose(archivo);
    printf("\nSe ha leido el archivo correctamente!");
    return 0;

}