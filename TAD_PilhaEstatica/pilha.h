typedef struct pilha *Pilha;
Pilha cria_pilha();
int Le_topo(int *pilha, int elem);
int pilha_vazia(Pilha p);
int pilha_cheia(Pilha p);
int pop(Pilha p, int *elem);
int push(Pilha p, int elem);


