#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float i, payment, monthlyPayment;
	char plan, yes;
	
	printf("The payment plan A is a lump-sum payment, and \n B is the monthly payment plan with a simple interest. \n");
	printf("Type a payment plan (A) or (B)");
	scanf(" %c", &plan);
	printf("Please enter the payment value: ");
	scanf("%f", &payment);
	
	switch(plan)
	{
		case 'A':
			{
				printf("You have selected lump-sum payment plan \n");
				printf("Your payment is %.2f dollars. \n", payment);
				break;
			}
		case 'B':
			yes = 'N';
			n = 5;
			printf("You have selected the monthly-payment program. \n");
			while((yes == 'N')||(n <= 0))
			{
				printf("Please enter the maturity: ");
				scanf("%d", &n);
				
				if((n > 0)&&(n <= 3))
				{
					i = 0.05;
					printf("Your payment is %.2f dollars. \n", payment*(1+i*n));
					printf("Your monthly payment is %.2f dollars for %d months. \n", payment*(1+i*n)/n, n);
					printf("Do you confirm the payment? (Y/N)");
					scanf(" %c", &yes);
				}
				else if(n > 3)
				{
					i = 0.1;
					printf("Your total payment is %.2f dollars. \n", payment*(1+i*n));
					printf("Your monthly payment is %.2f dollars for %d months. \n", (float)payment*(1+i*n)/n, n);
					printf("Do you confirm the payment? (Y/N)");
					scanf(" %c", &yes);
				}
				
				else
					printf("Invalid maturity! \n");
			}
			break;
	}

	return 0;	
}
