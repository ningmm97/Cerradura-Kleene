#include <stdio.h>
#include <math.h>

void generarCombinaciones(int n, int k, int array[], int inicio) {
    if (inicio == k) {
        for (int i = 0; i < k; i++) {
            printf("%d ", array[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        array[inicio] = i;
        generarCombinaciones(n, k, array, inicio + 1);
    }
}

int main() {
    int n = 3; // Número de elementos en el conjunto 1,2,3
    int k; // Longitud de las combinaciones

    printf("Ingrese la longitud de las combinaciones: ");
    scanf("%d", &k);

    int array[k];

    generarCombinaciones(n, k, array, 0);

    return 0;
}


