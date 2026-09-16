#include <stdio.h>
#include "Racional.h"

int main(){
    Racional *N1, *N2, *N3;
    int nu, de;
    
    N1 = generate(); N2 = generate();
    if(N1 == NULL || N2 == NULL){
        printf("Não foi possivel criar os racionais\n");
        return -1;
    }
    printf("Digite o numerador e o denominador do 1o racional\n");
    scanf("%d", &nu); scanf("%d", &de);
    if(set_value(N1, nu, de) == 0){
        printf("Falha ao preencher o 1o racional.\n");
        return -1;
    }
    printf("Digite o numerador e o denominador do 2o racional\n");
    scanf("%d", &nu); scanf("%d", &de);
    if(set_value(N2, nu, de) == 0){
        printf("Falha ao preencher o 2o racional.\n");
        return -1;
    }
    N3 = sum(N1, N2);
    if(N3 == NULL){
        printf("Falha ao somar os dois numeros racionais\n");
        return -1;
    }
    if(get_value(N3, &nu, &de) == 0){
        printf("Falha ao recuperar o numerador e o denominador resultante.\n");
        return -1;
    }
    printf("\n O resultado da soma eh: %d / %d.\n", nu, de);
    delete(&N1); delete(&N2); delete(&N3);
    return 0;
}