#include<stdio.h>
int main(){
    float dist, tempo, vel_media;
    printf("Digite a distância em km entre duas cidades: ");
    scanf("%f", &dist);
    printf("Digite o tempo que seu veículo levou para percorrer esta distância em horas: ");
    scanf("%f", &tempo);
    vel_media = dist/tempo;
    printf("A velocidade média do veículo foi de %.2f km/h\n", vel_media);
    return 0;
}