#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No* proximo;
}No;

No* inicio = NULL;
int tamanho = 0;

void adicionar (int valor, int posicao) {
    if(posicao >= 0 && posicao <= tamanho){

        No* NOVO = malloc(sizeof(No));
        NOVO -> valor = valor;
        NOVO -> proximo = NULL;

        if (inicio == NULL) {
            inicio = NOVO;
        }
        else if (posicao == 0) {
            NOVO -> proximo = inicio;
            inicio = NOVO;
        }
        else {
            No* auxiliar = inicio;
            int indice;
            for(indice = 0; indice < posicao - 1; indice++) {
                auxiliar = auxiliar -> proximo;
            }
            NOVO->proximo = auxiliar -> proximo;
            auxiliar -> proximo = NOVO;
        }
        tamanho++;
        
    }
};
int remover (int posicao) {
    if (posicao >= 0 && posicao < tamanho) {
        No* lixo;
        int retorno;
        if(posicao == 0) {
            lixo = inicio;
            inicio = inicio -> proximo;
        }
        else{
            No* auxiliar = inicio;
            int indice;
            for(indice = 0; indice < posicao - 1; indice++) {
                auxiliar = auxiliar -> proximo;
            }
            lixo = auxiliar -> proximo;
            auxiliar -> proximo = auxiliar -> proximo -> proximo;
        }
        retorno = lixo -> valor;
        free(lixo);
        tamanho--;
        return retorno;
    }
    return -1;
};

int main() {
    adicionar(10,0);
    adicionar(20,1);
    adicionar(30,1);
    adicionar(40,3);
    return 0;
};