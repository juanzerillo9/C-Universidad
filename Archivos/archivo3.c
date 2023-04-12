#include <stdio.h>

int main(){
    FILE* archivo = fopen("archivo.txt", "r");

    char str1[10], str2[10], str3[10];
    int year;

    fscanf(archivo, "%s %s %s %d", str1, str2, str3, &year);

    printf("Lei: %s %s %s %d ", str1, str2, str3, year);
    fclose(archivo);

    return 0;
}