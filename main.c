#include <stdio.h>
#include <stdlib.h>
#include "Listacircular.c"
#include <stdbool.h>

circularList lista_circular;

int main() {
    iniciarLista(&lista_circular);

    /*adicionaNode(&lista_circular, 1, 10);
    adicionaNode(&lista_circular, 2, 5);
    adicionaNode(&lista_circular, 3, 6);*/

    inserirOrdenado(&lista_circular, 12, 10);
    inserirOrdenado(&lista_circular, 15, 5);
    inserirOrdenado(&lista_circular, 17, 6);
    inserirOrdenado(&lista_circular, 16, 10);
    inserirOrdenado(&lista_circular, 18, 10);
    inserirOrdenado(&lista_circular, 10, 10);
    inserirOrdenado(&lista_circular, 11, 10);
    inserirOrdenado(&lista_circular, 19, 10);
    inserirOrdenado(&lista_circular, 13, 10);
    imprimirLista(&lista_circular);
}