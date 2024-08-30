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

    if (lista_circular->head == NULL)
    {
        lista_circular->head = novoNode;
        return novoNode;
    }

    if (lista_circular->head.nextNode == NULL)
    {
        lista_circular->tail = novoNode;
        lista_circular->head->nextNode = lista_circular->tail;
        return novoNode;
    }
    

    
    return novoNode;
}