#include <stdio.h>
#include "lista.h"
struct no
{
    int info;
    struct no *prox;
};

lista criaNo(lista lst){
    return NULL;
}

int listaVazia(lista lst){
    if(lst == NULL)
        return 1;
    else
        return 0;
}
    
int insere_ord(lista *lst, int elem){
    lista a = (lista) malloc(sizeof(lista));
    if(a == NULL) return 0;
    a->info = elem;
    
    if(listaVazia(*lst) || elem <= (*lst)->info){
        a->prox = *lst;
        *lst = a;
        return 1;
    }
    lista aux = *lst;

    while(aux->prox != NULL && aux->prox->info < elem)
        aux = aux->prox;

    a->prox = aux->prox;
    aux->prox = a;
    return 1;
        
}

