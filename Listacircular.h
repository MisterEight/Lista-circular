typedef struct {
    int id;
    int valor;
    struct Node* nextNode;
} Node;

typedef struct {
    struct Node* head;
    struct Node* tail;
} circularList;

Node* inserirInicio(circularList* lista_circular, int id, int valor);
Node* criarNode(int id, int valor);
void iniciarLista(circularList* lista_circular);
void imprimirLista(circularList* lista_circular);
void removerNode(circularList* lista_circular, int id);
void buscarNode(circularList* lista_circular, int id);
void inserirOrdenado(circularList* lista_circular, int id, int valor);
void ordenarLista(circularList* lista_circular);

