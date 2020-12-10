#include <stdio.h>
#include <string.h>

int algoritimo(int a, int b, int c)
{
	int x;
	x = (a * b/(2 * c))/4;
	return x;
}

void	imprimir_duplicado(int res)
{
	printf("resultado dessa bosta duplicado: %d\n", res * 2);
}

int main()
{
	int x = 95;
	int y = 14;
	int k = 17;

	int resultado;
	resultado = algoritimo(x, y, k);

	printf("ta ai essa bosta: %d\n", resultado);
	printf("ta ai essa bosta  / 2 : %d\n", resultado / 2);

	imprimir_duplicado(resultado);
	imprimir_duplicado(algoritimo(x, y, k));
}
