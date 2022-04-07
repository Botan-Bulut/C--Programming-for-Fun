/**************************
*Rock, paper, scissors 	  *
*Created by Botan		  *
**************************/

#include<stdio.h>
int main()
{
	char playAgain, player;
	int number, bot;
	playAgain = 'Y';
	printf("This is a rock paper and scissors game created by Botan. \n Press any number to continue... ");
	scanf(" %d", &number);
	while (playAgain != 'N' )
	{
		printf("Rock(R), paper(P) or ,Scissors(S): ");
		scanf(" %c", &player);
		bot = rand() %3 +1;
		if(bot == 1)
			printf("Your opponent has rolled rock. \n");
		if(bot == 2)
			printf("Your opponent has rolled paper. \n");
		if(bot == 3)
			printf("Your opponent has rolled scissors. \n");
		switch(player)
		{
			case 'R':
				{
					player = 1;
					if(bot == 1)
						printf("Tie! \n");
					if(bot == 2)
					{
						printf("Paper beats rock! \n");
						printf("You lose. \n");
					}
					if(bot == 3)
					{
						printf("Rock beats scissors! \n");
						printf("You win. \n");					
					}	
					break;
				}
			case 'P':
			{
				player = 2;
				if(bot == 1)
				{
					printf("Paper beats rock! \n");
					printf("You win. \n");
				}
				if(bot == 2)
					printf("Tie! \n");
				if(bot == 3)
				{
					printf("Scissors beats paper! \n");
					printf("You lose. \n");
				}
				break;
			}
			case 'S':
			{
				player = 3;
				if(bot == 1)
				{
					printf("Rock beats scissors! \n");
					printf("You lose. \n");
				}
				if(bot == 2)
				{
					printf("Scissors beats paper! \n");
					printf("You win. \n");
				}
				if(bot == 3)
					printf("Tie! \n");
				break;
				
			}	
		}
		bot = 0;
		printf("Would you like to play again (Y/N)? : ");
		scanf(" %c", &playAgain);
	}
	return 0;
}

