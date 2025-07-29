#ifndef _sopa_de_letras_h
#define _sopa_de_letras_h

#define TAMAÑO_Y 20
#define TAMAÑO_X 20
#define CANTIDAD_DIMENSIONES 2

typedef struct Terreno_t Terreno_t;

/*
idea:
puedo tambien extender el juego. Escribir las posiciones de las letras(porque no las puedo 
remarcar y/o pintar) mandarlas por input y que alguna funcion las valide y de por encontrado 
*/

//post: muestra por pantalla(imprime) el terreno bidimensional con las letras
void imprimir_terreno(Terreno_t* terreno);


Terreno_t* inicializar_terreno(int tamaño_en_x, int tamaño_en_y);

void destruir_terreno(Terreno_t* terreno);

/*
//pre: el tamaño debe ser acorde a la pantalla para una mejor apreciacion
void pedir_tamaño_sopa(int tamaño_x_y[CANTIDAD_DIMENSIONES]);

*/

/*
post:   se le pide una palabra al usuario, se almacena en un arreglo dinamico y luego 
        se verifica para que la palabra no supere el tamaño de la sopa de letras
*/
/*
char* pedir_palabra();

*/




#endif // _sopa_de_letras_h