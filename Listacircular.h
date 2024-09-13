typedef struct Node {
    int id;
    int valor;
    struct Node* nextNode;
    struct Node* prevNode;
} Node;

typedef struct {
    Node* head;
    Node* tail;
} circularList;

Node* adicionaNode(circularList* lista_circular, int id, int valor);
Node* criarNode(int id, int valor);
void iniciarLista(circularList* lista_circular);
void imprimirLista(circularList* lista_circular);
void removerNode(circularList* lista_circular, int id);
void buscarNode(circularList* lista_circular, int id);
Node* inserirOrdenado(circularList* lista_circular, int id, int valor);
void ordenarLista(circularList* lista_circular);

