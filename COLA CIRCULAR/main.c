#include <stdio.h>
#include "colasCirculares.h"

int main() {
    Cola * cola = newCola(5);

    insertarElemento(cola, 2);
    insertarElemento(cola, 5);
    insertarElemento(cola, 7);
    insertarElemento(cola, 11);
    insertarElemento(cola, 83);

    printCola(cola);

    insertarElemento(cola, 44);

    printCola(cola);

    printf("\nDesencolamos: %d\n", eliminarElemento(cola));

    printCola(cola);

    return 0;
}
