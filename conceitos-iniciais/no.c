#include <stdio.h>
#include <stdlib.h>


struct No {
    int valor;
    struct No *Prox;
};

int main() {
    struct No *NOVO = malloc(sizeof(struct No));
    NOVO -> valor = 18;
    NOVO -> Prox = NULL;
    return 0;
};

/*Exemplo de utilização de typedef
typedef struct No {
    int valor;
    struct No *Prox;
}No;
struct No *NOVO = malloc(sizeof(No)); Fica sem a repetição da palavra struct
*/
