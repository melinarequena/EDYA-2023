//
// Created by Administrador on 20/12/2023.
//

#ifndef COLASCIRCULARES_COLASCIRCULARES_H
#define COLASCIRCULARES_COLASCIRCULARES_H


typedef struct cola{
    int capacidad;
    int tamanio;
    int posExtraccion;
    int posInsercion;
    int * cola;
}Cola;

Cola * newCola(int capacidad);
void insertarElemento(Cola * cola, int valor);
int siguientePosicion(Cola * cola, int posicion);
int eliminarElemento(Cola * cola);
void printCola(Cola * cola);


#endif //COLASCIRCULARES_COLASCIRCULARES_H
