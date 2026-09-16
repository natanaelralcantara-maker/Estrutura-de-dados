#include <stdio.h> //para usar o NULL
#include <stdlib.h> //para usar as funções malloc() e free()
#include "Racional.h"


struct racional
{
    int num, den;
};

Racional * generate(){
    Racional *p;
    p = (Racional *) malloc(sizeof(Racional));
    return p;
}

int set_value(Racional *p, int N, int D){
    if(p == NULL || D == 0){
        return 0; //falha
    }

    p->num = N;
    p->den = D;
    return 1; //Sucesso
}

int get_value(Racional *p, int *N, int *D){
    if(p == NULL){
        return 0; //falha
    }

    *N = p->num;
    *D = p->den;
    return 1; //sucesso
}

Racional *sum(Racional *R1, Racional *R2){
    Racional *R3;
    R3 = generate();

    if(R3 != NULL){
        R3->num = (R1->num * R2->den) + (R1->den * R2->num);
        R3->den = (R1->den * R2->den);
    }

    return R3; //sucesso ou falha

}

void delete(Racional **p){
    free(*p);
    *p = NULL;
}