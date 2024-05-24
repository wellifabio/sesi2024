#include <stdio.h>
int main() {
    int cpm = 5;
    int vetor[cpm];
    int i;
    for (i = 0; i < cpm; i++) {
        vetor[i] = i;
    }
    for (i = 0; i < cpm; i++) {
        printf("%d\n", vetor[i]);
    }
    return 0;
}