#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"");
	int x, y, z;
	printf("Digite dois n�meros inteiros:");
	scanf("%d %d", &x, &y);
	z = pow(x, y);
	printf("%d elevado a %d � %d", x, y, z);
	return 0;
}
