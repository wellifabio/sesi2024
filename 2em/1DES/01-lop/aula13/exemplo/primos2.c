#include <stdio.h>

int ePrimo(int num, int divisor) {
    // Se o divisor chegar a 1, o número é primo
    if (divisor == 1) {
        return 1;
    }
    // Se o número for divisível por qualquer outro número além de 1 e ele mesmo, não é primo
    if (num % divisor == 0) {
        return 0;
    }
    // Verifica o próximo divisor
    return ePrimo(num, divisor - 1);
}

void mostraPrimo(int num) {
    // Se o número for 1, não é primo
    if (num == 1) {
        return;
    }
    // Verifica se o número atual é primo
    if (ePrimo(num, num / 2)) {
        printf("%d, ", num);
    }
    // Verifica o próximo número
    mostraPrimo(num - 1);
}

int main() {
    mostraPrimo(50000);
    return 0;
}