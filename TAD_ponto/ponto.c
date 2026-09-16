#include "ponto.h"
#include <stdlib.h>
#include <math.h>

struct ponto
{
    int x;
    int y;
};

Ponto * cria_pto(int x, int y){
    Ponto *p;
    p = (Ponto *) malloc(sizeof(Ponto));
    if(p == NULL){
        return 0;
    }
    p->x = x;
    p->y = y;
    return p;
}
void libera_pto(Ponto **p){
    free(*p);
    *p = NULL;
}
int distancia_pto(Ponto *p1, Ponto *p2){
    int a = (sqrt((pow((p2->x) - p1->x,2)) + (pow((p2->y) - p1->y,2))));
    return a;
}
