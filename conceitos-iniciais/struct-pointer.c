#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
    float altura;
    int idade;
    float peso;
};

int main() {
    
    struct Pessoa *p = malloc(sizeof(struct Pessoa));
    p -> peso = 56.5;
    p -> idade = 18;
    p -> altura = 1.67;

    printf("%d\n",p);
    printf("%d\n",p -> idade);
    return 0;
};