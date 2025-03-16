#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int lista[], int n) {
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++){
            if (lista[j] > lista[j + 1]) {
                swap(&lista[j], &lista[j + 1]);
            }
        }
    }
}

int main () {
    int lista[] = {5, 2, 9, 1, 6};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    BubbleSort(lista, tamanho);

    printf("Lista ordenada: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
    return 0;
};