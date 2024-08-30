#include <stdio.h>
#include <stdlib.h>
#include "Listacircular.c"

circularList lista_circular;

int main() {
    iniciarLista(&lista_circular);

    inserirInicio(&lista_circular, 1, 10);
    inserirInicio(&lista_circular, 2, 5);
}