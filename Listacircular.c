#include "Listacircular.h"

void iniciarLista(circularList* lista_circular) {
    
    lista_circular->head = NULL;
    lista_circular->tail = NULL;

    printf("\nLista iniciada");
}

Node* criarNode(int novo_node_id, int novo_node_valor){
    Node* novoNode = (Node*) malloc(sizeof(Node));

    novoNode->id = novo_node_id;
    novoNode->valor = novo_node_valor;
    novoNode->nextNode = NULL;

    return novoNode;
}

Node* inserirInicio(circularList* lista_circular, int id, int valor) {
    Node* novoNode = criarNode(id, valor);

    if (lista_circular->head == NULL) {
        // Lista vazia
        lista_circular->head = novoNode;
        lista_circular->tail = novoNode;
        novoNode->nextNode = novoNode;
    } else {
        novoNode->nextNode = lista_circular->head;
        lista_circular->head = novoNode;
        lista_circular->tail->nextNode = novoNode;
    }

    return novoNode;
    
    

    
    return novoNode;
}