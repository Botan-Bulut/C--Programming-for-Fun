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
	float s, probability, cumulative_prob = 0;
	
	printf("Enter n: ");
	scanf("%d", &n);
	printf("Enter success rate: ");
	scanf("%f", &s);
	printf("Enter x: ");
	scanf("%d", &x);
	coefficient = combination(n, x);
	
	probability = coefficient*pow(s, x) *pow((1-s), (n-x));
	printf("Discrete probability = P(X = x) = %f \n", probability);
	for(; x > 0; --x)
	{
		cumulative_prob = cumulative_prob + combination(n,x) *pow(s, x) *pow((1-s), (n-x));
	}
	printf("Cumulative probability = P(X <= x) = %f", cumulative_prob);
	return 0;
	
	
	
	
}
