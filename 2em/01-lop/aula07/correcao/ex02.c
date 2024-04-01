#include <stdio.h>
int main(){
    int n1, n2, n3;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("Soma: %d\n", (n1 + n2 + n3)/3);
    return 0;
}