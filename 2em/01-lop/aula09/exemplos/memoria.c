#include <stdio.h>
int main() {
    //int i; Declaração de variável sem nenhum valor (sujeira)
    int i = 10; //Declaração de variável com valor
    printf("Endereço de i: %p\n", &i);
    printf("Conteúdo de i: %d\n", i);
}