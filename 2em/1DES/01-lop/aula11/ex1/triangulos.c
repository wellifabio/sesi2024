#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL,"");
	FILE *entrada;
	char str[10];
	int lado1, lado2, lado3;
	
	entrada = fopen ("./triangulos.csv", "r");
	if(entrada == NULL)
		printf("Erro, não foi possivel abrir o arquivo\n");
	else{
		while((fgets(str, 10, entrada)) != NULL){
			lado1 = atoi(strtok(str,";"));
			lado2 = atoi(strtok(NULL,";"));
			lado3 = atoi(strtok(NULL,";"));
			if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
			    if(lado1 == lado2 && lado1 == lado3)
                    printf("Triangulo Equilatero\n");
                else if(lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
                    printf("Triangulo Escaleno\n");
                else
                    printf("Triangulo Isosceles\n");
			}else{
			    printf("Não é triangulo\n");  
			}
		}
	}
	fclose(entrada);
	return 0;
}