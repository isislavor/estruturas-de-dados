#include <stdio.h>

struct Cachorro {
    int idade;
    float peso;
    char nome[50];
};

int main() {
    struct Cachorro Cachorro1 = {2,15.3,"Bob"};
    printf("%d\n", Cachorro1.idade);
    printf("%f\n",Cachorro1.peso);
    printf("%s\n",Cachorro1.nome);
    return 0;
}; 


/*
Alternativas para adicionar valores as variáveis do registro

struct Cachorro Cachorro1;
strcpy(Cachorro1.nome, "Bob");
Cachorro1.idade = 1;
Cachorro1.peso = 12.5;
*/