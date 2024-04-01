#include<stdio.h>

#define PI 3.1415

int main(){
    float r, h, area, volume;
    printf("Digite o raio de um cilindro: ");
    scanf("%f", &r);
    printf("Digite a altura de um cilindro: ");
    scanf("%f", &h);
    area = 2*PI*r*(r+h);
    volume = PI*r*r*h;
    printf("A área do cilindro é %.2f e o volume é %.2f\n", area, volume);
    return 0;
}