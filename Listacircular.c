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
    novoNode->prevNode = NULL;

    return novoNode;
}

Node* adicionaNode(circularList* lista_circular, int id, int valor) {
    Node* novoNode = criarNode(id, valor);

    if (lista_circular->head == NULL) {
        lista_circular->head = novoNode;
        lista_circular->tail = novoNode;
        novoNode->nextNode = novoNode;
        novoNode->prevNode = novoNode;
    } else {
        lista_circular->tail->nextNode = novoNode;
        novoNode->prevNode = lista_circular->tail;
        lista_circular->tail = novoNode;        
        novoNode->nextNode = lista_circular->head;
        lista_circular->head->prevNode = lista_circular->tail;
    }

    return novoNode;
}

void imprimirLista(circularList* lista_circular){
    
    if (lista_circular->head == NULL)
    {
        printf("Lista vazia.");
        return;
    }

    Node* no_atual = lista_circular->head;
    do
    {
        printf("\nID: %d, Valor: %d\n", no_atual->id, no_atual->valor);
        no_atual = no_atual->nextNode;
    } while (no_atual != lista_circular->head);
}

Node* inserirOrdenado(circularList* lista_circular, int id, int valor){

    Node* novoNode = criarNode(id, valor);

    if (lista_circular->head == NULL)
    {
        lista_circular->head = novoNode;

        lista_circular->tail = novoNode;

        novoNode->nextNode = novoNode;

        novoNode->prevNode = novoNode;
        
        return novoNode;
    }

    if (lista_circular->tail == lista_circular->head)
    {
        if (lista_circular->head->id >= novoNode->id)
        {
            lista_circular->tail->nextNode = novoNode;

            lista_circular->tail->prevNode = novoNode;

            lista_circular->head = novoNode; 

            lista_circular->head->prevNode = lista_circular->tail;

            lista_circular->head->nextNode = lista_circular->tail;
        } else {
            novoNode->nextNode = lista_circular->head;

            novoNode->prevNode = lista_circular->head;

            lista_circular->tail = novoNode;

            lista_circular->head->nextNode = lista_circular->tail;

            lista_circular->head->prevNode = lista_circular->tail;
        }
        
        return novoNode;
    }

    if (lista_circular->head->id >= novoNode->id)
    {
        novoNode->nextNode = lista_circular->head;

        lista_circular->head->prevNode = novoNode;

        novoNode->prevNode = lista_circular->tail;

        lista_circular->head = novoNode;

        lista_circular->tail->nextNode = lista_circular->head;

        return novoNode;
    }

    if (novoNode->id >= lista_circular->tail->id)
    {
        novoNode->nextNode = lista_circular->head;
        novoNode->prevNode = lista_circular->tail;
        lista_circular->tail->nextNode = novoNode;
        lista_circular->tail = novoNode;
        return novoNode;
    }
    
    Node* no_atual = lista_circular->head;
    
    do
    {
        if (no_atual->id > novoNode->id)
        {
            novoNode->nextNode = no_atual;
            no_atual->prevNode->nextNode = novoNode;
            novoNode->prevNode = no_atual->prevNode;
            no_atual->prevNode = novoNode;
            break;
        }

        no_atual = no_atual->nextNode;
        
        
    } while (no_atual != lista_circular->head);

    return novoNode;
}
