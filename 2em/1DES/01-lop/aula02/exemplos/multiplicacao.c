#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int x, y;
	printf("Digite dois n�meros inteiros:");
	scanf("%d %d", &x, &y);
	printf("A multiplica��o de %d e %d � %d", x, y, x * y);
	return 0;
}
