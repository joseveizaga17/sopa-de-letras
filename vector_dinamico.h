#ifndef _VECTOR_DINAMICO_H
#define _VECTOR_DINAMICO_H
            
        
                    // enfocado solo a char

                            

//post: crea el vector a partir de un tamaño pasado por parametros
char* vector_crear(int tamaño);

//post: redimenciona el vector a partir de un nuevo tamaño
char* vector_redimencionar(int tamaño_nuevo);

//post: libera la memoria reserva 
void vector_destruir(char* vector);


#endif _VECTOR_DINAMICO_H