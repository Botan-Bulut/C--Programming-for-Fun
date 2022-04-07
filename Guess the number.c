/**************************
*Guess the number program *
*Created by Botan		  *
**************************/

#include<stdio.h>
int main(void)
{
	int x, number;
	number = srand() %500; //Number value will be generated randomly.
	printf("Find The number in the range of 0-500. \n");
	
	
	while(x != number)
	{
		printf("Enter a number: ");
		scanf("%d", &x);
		if(x < number)
		{
			printf("Too low! \n");
		}
		if(x > number)
		{
			printf("Too high! \n");
		}
		
	}
	printf("Correct number!");
	return 0;
}
