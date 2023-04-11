#include <stdio.h>

int main(){
    
    int num = 1234;
    FILE *arch;

    /* Archivo de Texto */
    arch = fopen("nros.txt", "w");
    fprintf(arch, "%d", num);

    /* Archivo Binario */
    arch = fopen("nros.dat", "wb");
    fwrite(&num, sizeof(int), 1, arch);
    
}