#include <stdio.h>
#include <string.h>

// Definindo uma struct para pessoa
struct Pessoa {
    char nome[50];
    int idade;
};

int soma(int a, int b) {
    return a + b;
}

int main() {
    // Exemplo 01 - Ponteiro para inteiro
    int x = 10;
    int *pInt = &x;
    printf("Exemplo 01: Ponteiro para inteiro\n");
    printf("x = %d, *pInt = %d\n\n", x, *pInt);

    // Exemplo 02: Ponteiro para char
    char letra = 'A';
    char *pChar = &letra;
    printf("Exemplo 02: Ponteiro para char\n");
    printf("letra = %c, *pChar = %c\n\n", letra, *pChar);

    // Exemplo 03: Ponteiro para float
    float f = 3.14;
    float *pFloat = &f; 
    printf("Exemplo 03: Ponteiro para float\n");
    printf("f = %.2f, *pFloat = %.2f\n\n", f, *pFloat);

    // Exemplo 04: Ponteiro para array
    int arr[3] = {1, 2, 3};
    int *pArr = arr;  
    printf("Exemplo 04: Ponteiro para array\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d, *(pArr + %d) = %d\n", i, arr[i], i, *(pArr + i));
    }
    printf("\n");

    // Exemplo 05: Ponteiro para ponteiro
    int **ppInt = &pInt;  
    printf("Exemplo 05: Ponteiro para ponteiro\n");
    printf("Valor de pInt: %p\n", (void*)pInt);
    printf("Valor de ppInt (endereço de pInt): %p\n", (void*)ppInt);
    printf("Valor apontado por ppInt (deve ser o endereço de x): %p\n", (void*)*ppInt);
    printf("Valor duplamente indireto (**ppInt = x): %d\n\n", **ppInt);

    // Exemplo 06: Ponteiro para função
    int (*pFunc)(int, int) = soma;  
    printf("Exemplo 06: Ponteiro para função\n");
    printf("soma(2, 3) = %d\n\n", pFunc(2, 3));

    // Exemplo 07: Ponteiro para struct
    struct Pessoa pessoa1;
    // Atribuindo valores à struct
    strcpy(pessoa1.nome, "Maria");
    pessoa1.idade = 25;

    // Criando um ponteiro para a struct
    struct Pessoa *pPessoa = &pessoa1;
    
    printf("Exemplo 07: Ponteiro para struct\n");
    // Acessando os membros da struct através do ponteiro com o operador '->'
    printf("Nome: %s, Idade: %d\n", pPessoa->nome, pPessoa->idade);

    return 0;
}
