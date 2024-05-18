#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int x, y;
	printf("Digite dois números inteiros:");
	scanf("%d %d", &x, &y);
	printf("A subtração de %d e %d é %d", x, y, x-y);
	return 0;
}
