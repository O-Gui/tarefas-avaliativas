#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    if (numero >= 0 && numero <= 1000000000) {
        if (numero % 2 == 0) {
            printf("%d eh par.\n", numero);
        } else {
            printf("%d eh impar.\n", numero);
        }

        int soma = 0;
        int alga = numero;

        for (; alga != 0; alga /= 10) {
            soma += alga % 10;
        }

        printf("A soma dos algarismos de %d eh %d.\n", numero, soma);
    }

    return 0;
}
