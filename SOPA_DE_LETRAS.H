#ifndef _SOPA_DE_LETRAS_H
#define _SOPA_DE_LETRAS_H

#define TAMAÑO_Y 20
#define TAMAÑO_X 20

void generar_terreno(char terreno[TAMAÑO_X][TAMAÑO_Y]);
char* inicializar_terreno();

char* pedir_palabra();


#endif // _SOPA_DE_LETRAS_H