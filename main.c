#include <stdio.h>
#include <stdlib.h>

/*
        de momento seran dos implementaciones pendientes, no creo que haya tanta diferencia
        entre 1: hacer funciones para pedir inputs y 2: meterlos desde la ejecucion del 
        programa
*/
int main(int argc, char* argv[]){
    if (argc > 3 && argc < 3){
        printf("Verificar cantidad de entradas\n");
        return 1;
    }

    int tamaño_en_x =atoi(argv[1]);
    int tamaño_en_y =atoi(argv[2]);

    printf("%i %i\n", tamaño_en_x, tamaño_en_y);



return 0;
}