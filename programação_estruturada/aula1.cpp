#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");

	/*int x, y, res;

	printf("Digite o primeiro valor:");
	scanf_s("%i", &x);

	printf("Digite o segundo valor:");
	scanf_s("%i", &y);

	res = x + y;

	printf("O resultado da soma de %i com %i � %i.", x, y, res);*/


	int x;
	printf("Digite um valor para testarmos: ");
	scanf_s("%i", &x);
	if (x % 2 == 0) {
		printf("O n�mero � PAR.");
	}
	else {
		printf("O n�mero � �MPAR.");
	}

	return 0;
}

int vetores() {
	int numeros[101]; // Vetor com 101 posi��es (de 0 a 100)
	int i;

	// Preenchendo o vetor com n�meros de 0 a 100
	for (i = 0; i < 101; i++) {
		numeros[i] = i;
	}

	// Desvendando os n�meros pares
	for (i = 0; i < 101; i++) {
		if (numeros[i] % 2 == 0) {
			// Revelando os segredos dos pares
			printf("%d", numeros[i]);
		}
	}
	return 0;
}
