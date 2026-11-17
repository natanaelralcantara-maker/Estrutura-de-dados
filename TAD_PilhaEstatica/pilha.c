#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct pilha
{
    int info[MAX];
    int topo;
};

Pilha cria_pilha(){
    Pilha p;
    p = (Pilha) malloc (sizeof(struct pilha));
    if(p != NULL){
        p->topo -1;
        return p;
    }
    return 0;
}

int pilha_vazia (Pilha p){
    if(p->topo == -1){
        return 1;
    }else return 0;
}

int pilha_cheia(Pilha p){

}

int pop(Pilha p, int *elem){
    if(p == NULL || pilha_vazia(p))
    return 0;

    *elem = p->info[p->topo];
    p->topo --;
    return 1;
}

int push(Pilha p, int elem){
    if(p == NULL){
        return 0;
    }
    
}