#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"");
	int x;
	float z;
	printf("Digite número inteiro:");
	scanf("%d", &x);
	z = sqrt(x);
	printf("A raiz quadrada de %d é %f", x, z);
	return 0;
}
