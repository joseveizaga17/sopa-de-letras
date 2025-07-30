#include "sopa_de_letras.h"
//#include "vector_dinamico.h"


#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

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

char** crear_filas_columnas(int tamaño_horizon, int tamaño_vertic){
    ///verificar errores
    char** terreno_auxiliar = NULL;

    terreno_auxiliar = fila_inicializar(tamaño_horizon);
    if(terreno_auxiliar == NULL){
        printf("Error al crear fila.\n");
        return NULL;
    }


    //deberia ser while
    int i = 0;
    bool reserva_fallida = false;
    while (i < tamaño_horizon && !reserva_fallida){

        terreno_auxiliar[i] = columna_inicializar(tamaño_vertic);
        if (terreno_auxiliar[i] == NULL){
            reserva_fallida = true;
        }
        i++;
    }
    if (reserva_fallida){
        //liberar memoria de la fila horizontal y lo que se reservo en la fila vertical
        //return NULL;
    }


    return terreno_auxiliar;
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
    if (sopa == NULL){
        printf("Error al crear sopa de letras.\n");
        return NULL;
    }
    sopa->terreno = NULL;
    sopa->tamaño_horizontal = tamaño_en_x;
    sopa->tamaño_vertical = tamaño_en_y;


    sopa->terreno = crear_filas_columnas(sopa->tamaño_horizontal, sopa->tamaño_vertical);
    if (sopa->terreno == NULL){
        printf("Error en la creacion del terreno.\n");
        free(sopa);
        return NULL;
    }
    //crear_filas_columnas(sopa->tamaño_horizontal, sopa->tamaño_vertical);
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