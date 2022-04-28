//Binomial Distribution Calculator

#include <stdio.h>
#include <math.h>

int factorial(int x)
{
	int i, product = 1;
	for(i = 1; x > i; --x)
	{
		product = product*x;
	}
	return product;
}

int combination(int x, int y)
{
	int c;
	c = factorial(x)/(factorial(x - y)*factorial(y));
	return c;
}


int main()
{
	int n, x, coefficient;
	float s, probability;
	
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter success rate: ");
	scanf("%f", &s);
	printf("Enter x: ");
	scanf("%d", &x);
	coefficient = combination(n, x);
	
	probability = coefficient*pow(s, x) *pow((1-s), (n-x));
	printf("P(X = %d) = %f", x, probability);
	
	return 0;
	
	
	
	
}
