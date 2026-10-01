#define   _CRT_SECURE_NO_DEPRECATE 
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	
	double t = 0.5;
	double x, y;
	
	printf("\nВведите х\n");
	scanf("%lf", &x);
	printf("\nВведите y\n");
	scanf("%lf", &y);
	
	if (x < 0 || 2 * y + 3 * x <= 0)
	{
		printf("\n Значение функции не определено\n");
		return 0;
	}

	double chislitel = pow(sin(x),3) + log(2 * y + 3 * x);
	double znamenatel = pow(t, exp(1)) + sqrt(x);
	
	
	double f = chislitel / znamenatel;

	printf("\nF = %lf\n", f);
	return 0;
}