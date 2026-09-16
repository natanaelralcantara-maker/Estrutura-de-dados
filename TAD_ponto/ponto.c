#include "ponto.h"
#include <stdlib.h>
#include <math.h>

int * cria_pto(int x, int y){
    int *p;
    p = (int*) malloc(2*sizeof(int));
    if(p = NULL){
        return 0;
    }
    *p = x;
    *(p + 1) = y;
    return p;
}
int libera_pto(int **p){
    free(*p);
    *p = NULL;
}
int distancia_pto(int *x, int *y){
    int a = (sqrt(pow((*(x + 1)) - *x, 2) + pow(*(y + 1) - *y, 2)));
    return a;
}
