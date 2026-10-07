typedef struct lista *Lista;
Lista cria_lista();
int lista_vazia(Lista lst);
int lista_cheia(Lista lst);
int insere_elem(Lista lst, int elem);
int insere_ord(Lista lst, int elem);
int remove_element_ord(Lista lst, int element);
int obtem_valor_element(Lista lst, int posicao, int *valor);