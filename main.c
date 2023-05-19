#include <stdio.h>

int main(void) {
    int taxaMinima = 9;
    int valor = 0;
    int aguaUsada = 0;
    int passouDe100 = 0;
    int passouDe30 = 0;
    int passouDe10 = 0;

    // printf("Insira a quantidade total de agua usada em metros cubicos:\n");
    do {
        scanf("%i", &aguaUsada);
    } while (aguaUsada < 0);

    if (aguaUsada > 100) {
        passouDe100 = aguaUsada - 100;
        aguaUsada = aguaUsada - 100;
    }
    if (aguaUsada > 30) {
        passouDe30 = aguaUsada - 30;
        passouDe10 = 20;
        aguaUsada = aguaUsada - 30;
    } else {
        if (aguaUsada > 10) {
            passouDe10 = aguaUsada - 10;
        }
        aguaUsada = aguaUsada - 10;
    }
    valor = taxaMinima + passouDe10 + (passouDe30 * 2) + (passouDe100 * 5);
    printf("%d + %d + (%d * 2) + (%d *5) = %d:\n", taxaMinima, passouDe10, passouDe30, passouDe100, valor);
    // printf("Resultado -> %i \n", valor);
    printf("%i", valor);
}