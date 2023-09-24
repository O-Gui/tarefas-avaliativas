#include <stdio.h>

int main() {
    int senha, tentativa;
    int senha_cadastrada = 0;

    scanf("%d", &senha);

    if (!senha_cadastrada) {
        printf("senha cadastrada: %04d\n", senha);
        senha_cadastrada = 1;
    }

    for (;;) {
        scanf("%d", &tentativa);

        if (tentativa == senha) {
            printf("senha valida!\n");
            break;
        } else {
            printf("senha invalida!\n");
        }
    }

    return 0;
}
