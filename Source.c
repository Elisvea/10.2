
#include <stdio.h>
#include <locale.h>
#include <math.h>
#define _USE_MATH_DEFINES
int main()

	{
		double x = 0, s = 0; 
		int N = 0;
		setlocale(LC_ALL, "RUS");
		puts("\t\t\tЗадание 2.2");
		puts("sin(x)= x - x^3/3! + x^5/5! + x^7/7! + ... (-1)^(k-1) * x^2k-1/(2k-1)!\n");
		puts("Введите x:\n");
		scanf_s("%lf", &x);
		s = sin(x);
		s = x - pow(x, 3) / Factorial(3) + pow(x, 5) / Factorial(5) - pow(x, 7) / Factorial(7) + sin(x, N);
		printf("sin(x) = %6.5lf", s);
	}

	double sin(double x, int N)
	{
		double z;
		int k = 1;
		z = pow(-1, k - 1) * pow(x, 2 * k - 1) / Factorial(2 * k - 1);
		return 0;
	}
	int Factorial(unsigned N)
	{
		int result = 1;
		for (unsigned i = 1; i < N + 1; i++) result *= i;
		return result;

}