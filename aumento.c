#include <stdio.h>

int main() {
    char nivel;
    double salario;

    scanf("%c", &nivel);
    scanf("%lf", &salario);

    if (nivel == 'a') {
        salario += salario * 0.05;
    } else if (nivel == 'b') {
        salario += salario * 0.07;
    } else if (nivel == 'c') {
        salario += salario * 0.08;
    }

    printf("R$ %.2lf\n", salario);

    return 0;
}
