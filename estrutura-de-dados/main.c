#include "pilha.h"

int main()
{
    Pilha* pilha = pilha_criar();
    int n = 0;

    pilha_empilhar(pilha, 10);
    pilha_empilhar(pilha, 20);
    pilha_empilhar(pilha, 30);
    pilha_empilhar(pilha, 40);
    
    printf("\n");
    pilha_imprimir(pilha); // pilha original

    pilha_desempilhar(pilha, &n);
    pilha_imprimir(pilha); // pilha com dado desimpilhado
    printf("dado desimpilhado: %d\n", n);
    
    printf("\nPilha normal: \n");
    pilha_empilhar(pilha, 50);
    pilha_imprimir(pilha); // pilha normal

    printf("\npilha invertida:\n");
    pilha_inverter(pilha);
    pilha_imprimir(pilha); // pilha invertida

    printf("\npilha clone: \n");
    Pilha* pilha2 = pilha_clone(pilha);
    pilha_imprimir(pilha2); // pilha clone

    printf("\npilha invertida modificada:\n");
    pilha_empilhar(pilha, 60);
    pilha_imprimir(pilha); // pilha invertida modificada

    printf("\npilha clone modificada:\n");
    pilha_empilhar(pilha2, -10);
    pilha_imprimir(pilha2); // pilha clone modificada
    printf("\n");

    return 0;
}