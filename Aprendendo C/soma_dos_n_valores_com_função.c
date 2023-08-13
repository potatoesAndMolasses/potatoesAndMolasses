#include <stdio.h>
#include <stdlib.h>

int CalculaSoma(int n) {
	int soma, i;
	for (i = 1; i <= n; i++){
	soma += i;}
	return soma;
}

int main() {
	int n;
	printf("Vamos somar de 1 até o valor:");
	scanf("%d", &n);
	printf("%d\n", CalculaSoma(n));
	 return 0;
}
