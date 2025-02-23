#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int main() {
    //Exemplo 01 - Ponteiro para inteiro
    int x = 10;
    int *pInt = &x;
    printf("Exemplo 01: Ponteiro para inteiro\n");
    printf("x = %d, *pInt = %d\n\n", x, *pInt);

    //Exemplo 02: Ponteiro para char
    char letra = 'A';
    char *pChar = &letra;
    printf("Exemplo 2: Ponteiro para char\n");
    printf("letra = %c, *pChar = %c\n\n", letra, *pChar);

    // Exemplo 03: Ponteiro para float
    float f = 3.14;
    float *pFloat = &f; 
    printf("Exemplo 3: Ponteiro para float\n");
    printf("f = %.2f, *pFloat = %.2f\n\n", f, *pFloat);


    // Exemplo 04: Ponteiro para array
    int arr[3] = {1, 2, 3};
    int *pArr = arr;  
    printf("Exemplo 4: Ponteiro para array\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d] = %d, *(pArr + %d) = %d\n", i, arr[i], i, *(pArr + i));
    }
    printf("\n");

    // Exemplo 05: Ponteiro para ponteiro
    int **ppInt = &pInt;  
    printf("Exemplo 5: Ponteiro para ponteiro\n");
    printf("Valor de pInt: %p\n", (void*)pInt);
    printf("Valor de ppInt (endereco de pInt): %p\n", (void*)ppInt);
    printf("Valor apontado por ppInt (deve ser o endereco de x): %p\n", (void*)*ppInt);
    printf("Valor duplamente indireto (**ppInt = x): %d\n\n", **ppInt);

    // Exemplo 06: Ponteiro para função
    int (*pFunc)(int, int) = soma;  
    printf("Exemplo 6: Ponteiro para função\n");
    printf("soma(2, 3) = %d\n", pFunc(2, 3));

    return 0;
};