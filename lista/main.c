#include "lista.h"

int main()
{
    Lista* l1 = lista_criar();
    char str[100];
    int elemento = 0;

    lista_anexar(l1, 10);
    lista_anexar(l1, 20);
    lista_anexar(l1, 30);
    lista_anexar(l1, 40);
    lista_inserir(l1, 2, -5);
    lista_anexar(l1, 50);
    lista_inserir(l1, 0, 5);
    lista_inserir(l1, 7, -60);
    lista_inserir(l1, 5, -70);
    lista_removerPosicao(l1, &elemento, 5);
    lista_removerPosicao(l1, &elemento, 3);

    lista_toString(l1, str);
    printf("\n%s\nelemento removido: %d\n", str, elemento);

    return 0;
}