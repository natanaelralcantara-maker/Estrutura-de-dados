#include "ponto.h"
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main(){
    int x, x2, y, y2;
    Ponto *p1, *p2;

    printf("Digite as cordenadas de dois pontos: \n");
    scanf("%d", &x); 
    scanf("%d", &y);
    scanf("%d", &x2); 
    scanf("%d", &y2);

    p1 = cria_pto(x, y);
    p2 = cria_pto(x2, y2);

    printf("A distancia entre esses dois pontos e: %d", distancia_pto(p1, p2));

    libera_pto(&p1);
    libera_pto(&p2);   
    
    return 0;
}