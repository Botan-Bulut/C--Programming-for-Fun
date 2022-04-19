/**********************************
* Four Basic Operations Calculator*
* Created by Botan				  *
**********************************/

#include<stdio.h>
#include<math.h>

int main(void)
{
	float x, y, result;
	char operation;
	
	printf("Please enter 2 integers: ");
	scanf("%f %f", &x, &y);
	
	printf("Please select operation(+, -, /, *): ");
	scanf(" %c", &operation);
	
	switch(operation)
	{
		case '+':
			{
				result = x + y;
				printf("Result is %.2f.", result);
				break;	
			}
		case '-':
			{
				result = x - y;
				printf("Result is %.2f.", result);
				break;
			}
		case '*':
		{
			result = x * y;
			printf("Result is %.2f.", result);
			break;
		}
		case '/':
			if(y == 0)
			{
				printf("Result is undefined!");
				
			}
			else
			{
				result = x/y;
				printf("Result is %.2f.", result);
			}
			break;
		
	}
	

	return 0;
}
