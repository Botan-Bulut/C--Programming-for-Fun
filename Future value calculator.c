

#include<stdio.h>
#include<math.h>

int main(void)
{
	printf("This program aims to calculate the future value given present value, interest and maturity are known. \n It will utilize the formula FV = PV*(1+i)^n where FV, PV, i, and n are future value, present value, interest rate, and maturity respectively. \n");
	float FV, PV, i, n;
	printf("Please enter the present value: \n");
	scanf("%f", &PV);
	printf("Please enter the interest rate in decimal form (EX: 0.10 for 10 percent): \n");
	scanf("%f", &i);
	printf("Please enter the maturity: \n");
	scanf("%f", &n);
	if((PV<=0)|(n<0))
		printf("Present value and maturity must be positive! Please restart the program and try again. \n");
	else
	{
		FV = PV*pow((1+i), n);
		printf("Your future value is %.2f Dollars.", FV);}
	return 0;
}
