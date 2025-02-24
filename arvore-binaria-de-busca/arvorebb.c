#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int chave;
    struct No* esquerda;
    struct No* direita;
    struct No* pai;
}No;

typedef struct Arvore {
    No* raiz;
}Arvore;

No *criarNo(int chave) {
    No *Novo = malloc(sizeof(No));
    Novo -> chave = chave;
    Novo -> esquerda;
    Novo -> direita;
    Novo -> pai;
    return Novo;
};

void imprimirInOrdem(No* raiz) {
    if (raiz == NULL) {
        return;
    }
    imprimirInOrdem(raiz->esquerda);
    printf("%d ", raiz->chave);
    imprimirInOrdem(raiz->direita);
}

void imprimirPreOrdem(No* raiz) {
    if (raiz == NULL) {
        return;
    }
    printf("%d ", raiz->chave);
    imprimirPreOrdem(raiz->esquerda);
    imprimirPreOrdem(raiz->direita);
}

void imprimirPosOrdem(No* raiz) {
    if (raiz == NULL) {
        return;
    }
    imprimirPosOrdem(raiz->esquerda);
    imprimirPosOrdem(raiz->direita);
    printf("%d ", raiz->chave);
}

void inserirABB(Arvore* arvore, No *novo){
    No *pai = NULL;
    No *atual = arvore->raiz;

    while(atual != NULL) {
        pai = atual;
        if (novo -> chave < atual ->chave){
            atual = atual -> esquerda;
        }
        else{
            atual = atual ->direita;
        }
    }
    novo -> pai = pai;
    if(pai == NULL) {
        arvore -> raiz = novo;
    }
    else if(novo -> chave < pai ->chave) {
        pai -> esquerda = novo;
    }
    else {
        pai -> direita = novo;
    }
};

int main () {
    Arvore *arvore = malloc(sizeof(Arvore));
    arvore -> raiz = NULL;

    No *no1 = criarNo(10);
    No *no2 = criarNo(5);
    No *no3 = criarNo(15);
    No *no4 = criarNo(20);

    inserirABB(arvore, no1);
    inserirABB(arvore, no2);
    inserirABB(arvore,no3);
    inserirABB(arvore,no4);
    
    printf("In-ordem: ");
    imprimirInOrdem(arvore->raiz);
    printf("\n");

    printf("Pre-ordem: ");
    imprimirPreOrdem(arvore->raiz);
    printf("\n");

    printf("Pos-ordem: ");
    imprimirPosOrdem(arvore->raiz);
    printf("\n");
    return 0;
};

