#include "sopa_de_letras.h"
#include "vector_dinamico.h"


#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define TAMAÑO_Y 20
#define TAMAÑO_X 20
#define CANTIDAD_DIMENSIONES 2

struct Terreno_t{
    char** terreno;
    int tamaño_horizontal;
    int tamaño_vertical;
    
};

void generar_terreno(Terreno_t terreno){

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
    sopa->tamaño_horizontal = fila_inicializar(sopa->tamaño_horizontal);
    //deberia ser while
    for(int i = 0; i< sopa->tamaño_horizontal; i++){
        sopa->terreno[i] = columna_inicializar(sopa->tamaño_vertical);
    }
    

}
void generar_letras(Terreno_t* sopa){
    int ramdon = rand() % 20 + 0; // la amplitud del rango es 20 y el valor mínimo es 10.
    for(int i=0; i<sopa->tamaño_horizontal; i++){
        for(int j=0; i < sopa->tamaño_vertical; j++){
            sopa->terreno[]
        }
    }
}
const Terreno_t* inicializar_terreno(){
    ///verificar errores
    Terreno_t* sopa = (Terreno_t*)malloc(sizeof(Terreno_t));
    crear_filas_columnas(sopa);
    generar_letras(sopa);

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