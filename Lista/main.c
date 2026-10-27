#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

int main(){
    Lista l;
    int i, a, opcao, num;
    
    do
    {
        printf("===MENU===\n");
            printf("1- Inicializar uma lista\n");
            printf("2- Inserir Elementos\n");
            printf("3- Remover Elementos\n");
            printf("4- Imprimir a Lista\n");
            printf("5- Sair\n");
            printf("Digite a opcao\n");
            scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            l = cria_lista();
            break;
            
        case 2:
            printf("Quantos elementos deseja inserir?\n");
            scanf("%d", &a);

            printf("Escreva os numeros:");
            for(i = 0; i < a; i++){
                scanf("%d", &num);
                insere_ord(l,num);
            }

        case 3:
            printf("Qual elemento deseja remover?");
            scanf("%d", &num);

            remove_element_ord(l,num);

        case 4:
            for(i = 0; i <20; i++){
                obtem_valor_element(l,i,a);
                printf("%d", a);
            }
        default:
            break;
    }    
    } while (opcao != 4);
    
    

    return 0;
}