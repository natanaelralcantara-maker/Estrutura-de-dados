#include "lista.h"  
#include <stdlib.h>
#define max 20
struct lista
{
    int vet[max];
    int fim;
};

Lista cria_lista(){
    Lista lst;
    lst = (Lista) malloc(sizeof(Lista));
    
    if(lst != NULL)
        lst->fim = 0;

    return lst;
}

int lista_vazia(Lista lst){
    if(lst->fim == 0)
        return 1;
    else
        return 0;  
}

int lista_cheia(Lista lst){
    if(lst->fim == max)
        return 1;
    else
        return 0;
}

int insere_element(Lista lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;
    
    lst->vet[lst->fim] = elem;
    lst->fim ++;
    return 1;
}

int insere_ord(Lista lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;

    if(lista_vazia(lst) == 1 || elem >= lst->vet[lst->fim - 1]){
        lst->vet[lst->fim] = elem;
    }
    else{
        int i, aux = 0;
        while (elem >= lst->vet[aux])
            aux++;
        for(i = lst->fim; i >aux; i--)
            lst->vet[i] = lst->vet[i-1];
        lst->vet[aux] = elem;
    }
    lst->fim++;
    return 1;
}

int remove_element_ord(Lista lst, int element){
    if (lst == NULL || lista_vazia == 1 || element < lst->vet[0] || element > lst->vet[lst->fim-1])
        return 0;// Falha
    
    int i, Aux = 0;

    while(Aux < lst->fim && lst->vet[Aux]< element)
        Aux++;
    if(Aux == lst->fim || lst->vet[Aux] > element)
        return 0;//falha
    
    for(i = Aux+1; i < lst->fim; i++)
        lst->vet[i - 1] = lst->vet[i];

    lst->fim = lst->fim-1;//Deslocamento do fim
    return 1;//sucesso
}

int obtem_valor_element(Lista lst, int posicao, int *valor){
    if(lst == NULL || posicao < 0 || posicao > lst->fim)
        return 0;//falha

    int aux = 0;
    while(aux < lst->fim && aux < posicao)
        aux ++;
    
    valor = lst->vet[aux];
    return 1;//sucesso
}