/*
Cargar datos de personas desde un teclado a un archivo binario y luego visitar su contenido
*/

#include <stdio.h>
struct persona
{
    char    nombre[25];
    int     edad;
    float   peso;
    float   altura;
};

void main()
{
    /* Variables */
    struct persona r;
    FILE *a;
    int n;

    /* Cargar desde teclado un archivo */
    a=fopen("archper.dat", "wb");
    scanf("d", &n);
    
    while (n--)
    {
        fflush(stdin);
	    fgets(r.nombre, 25, stdin);
	    scanf("%d %f %f",&r.edad, &r.peso, &r.altura);
	    fwrite(&r, sizeof(struct persona), 1, a);
    }
    fclose(a);
    
    /*Mostrar por pantalla el contenido del archivo*/
    a=fopen("archper.dat","rb");
    fread(&r,sizeof(struct persona), 1,a); /* Controlar existencia archivo!! */
    

    /* Final de archivo */
    while(!feof(a)) 
    {
        printf("%s %d %f %f\n", r.nombre, r.edad, r.peso, r.altura);   
        fread(&r, sizeof(struct persona), 1, a);
    };
    fclose(a);
}
