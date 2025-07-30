#include <stdio.h>
#include <stdlib.h>
#include "sopa_de_letras.h"


int main(int argc, char* argv[]){
    if (argc > 4 || argc < 4){
        printf("Verificar cantidad de entradas.\n");
        return 1;
    }

    int tamaño_en_x =atoi(argv[1]);
    int tamaño_en_y =atoi(argv[2]);

    Terreno_t* terreno_sopa = inicializar_terreno(tamaño_en_x, tamaño_en_y);

    imprimir_terreno(terreno_sopa);
    /*

    printf("%i %i\n", tamaño_en_x, tamaño_en_y);
    printf("argc: %i\n", argc);
    printf("%s\n", argv[3]);
    */
    
    
    destruir_terreno(terreno_sopa);
    return 0;
}