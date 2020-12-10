#include <stdio.h>

int	divide_por_16(int a, int b)
{
	int x;
	if (a > b)
	{
		x = a / b;
		printf("%i\n", x);
		return x;
	}
	else
	{
		x = b / a;
		printf("%i\n", x);
		return x;
	}
}

void imprime_grande(int a)
{
	printf("o resultado %i e maior que 5", a);
}

void imprime_pequeno(int a)
{
	printf("o resultado %i e menor que 5", a);
}

int main()
{
	int x = 25;
	int y = 524;
	int r = divide_por_16(x, y);
	if (r > 5)
	{
		imprime_grande(r);
	}
	else
	{
		imprime_pequeno(r);
	}
}
