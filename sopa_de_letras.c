#include "sopa_de_letras.h"
//#include "vector_dinamico.h"


#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define TAMAÑO_Y 20
#define TAMAÑO_X 20
#define CANTIDAD_DIMENSIONES 2
#define TAMAÑO_ABECEDARIO 26

struct Terreno_t{
    char** terreno;
    int tamaño_horizontal;
    int tamaño_vertical;
    
};

void imprimir_terreno(Terreno_t* terreno){

    for (int j = 0; j < terreno->tamaño_vertical; j++){

        printf("|");
        for (int i = 0; i < terreno->tamaño_horizontal; i++){

            printf(" %c|", terreno->terreno[i][j]);
        }
        printf("\n");
        
    }
    
}

char** fila_inicializar(int tamaño_horizontal){
    ///verificar errores
    char** arreglo_cascaron = malloc(tamaño_horizontal*sizeof(char*));

    return arreglo_cascaron;
}

char* columna_inicializar(int tamaño_vertical){
    ///verificar errores
    char* arreglo_elementos = malloc(tamaño_vertical*sizeof(char));

    return arreglo_elementos;
}

void crear_filas_columnas(Terreno_t* sopa){
    ///verificar errores
    sopa->terreno = fila_inicializar(sopa->tamaño_horizontal);
    //deberia ser while
    for(int i = 0; i< sopa->tamaño_horizontal; i++){
        sopa->terreno[i] = columna_inicializar(sopa->tamaño_vertical);
    }
    

}

char generar_letras(){
    char letra;
    
    char abecedario[TAMAÑO_ABECEDARIO + 1];
    int ramdon = rand() % 26 + 0; // la amplitud del rango es 26 y el valor mínimo es 0.
    
    strcpy(abecedario, "abcdefghijklmnopqrstuvwxyz");
    letra = abecedario[ramdon];

    return letra;
}


void rellenar_terreno(Terreno_t* sopa){
    for(int i=0; i<sopa->tamaño_horizontal; i++){
        for(int j=0; j<sopa->tamaño_vertical; j++){
            sopa->terreno[i][j] = generar_letras();
        }
    }
}

Terreno_t* inicializar_terreno(int tamaño_en_x, int tamaño_en_y){
    ///verificar errores
    Terreno_t* sopa = malloc(sizeof(Terreno_t));
    sopa->tamaño_horizontal = tamaño_en_x;
    sopa->tamaño_vertical = tamaño_en_y;

    crear_filas_columnas(sopa);
    rellenar_terreno(sopa);

    return sopa; ///////////

}

//lo necesitas como puntero ya que eliminas la variable general despues de eliminar todo el contenido
void destruir_terreno(Terreno_t* terreno){
    for(int i = 0; i<terreno->tamaño_horizontal; i++){
        free(terreno->terreno[i]);
    }
    free(terreno->terreno);
    free(terreno);
}