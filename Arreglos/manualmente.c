#include <stdio.h>

int main(){
    char *frutas[5];
    frutas[0] = "Frutilla";
    frutas[1] = "Manzana";
    frutas[2] = "Banana";
    frutas[3] = "Kiwi";
    frutas[4] = "Pera";
    
    for(int i = 0; i<5 ; i++){
        printf(frutas[i]);
    }
    return 0;
}