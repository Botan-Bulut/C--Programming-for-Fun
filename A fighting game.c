/******************
* A fighting Game *
* Made by Botan	  *
******************/

#include<stdio.h>
#include<math.h>
int main(void)
{
	char start, playerAttackType;
	int playerRawDamage, playerDamage, enemyRawDamage, enemyDamage, playerHP = 100, enemyHP = 100, playerSuccessRate, enemySuccessRate;
	int enemyAttack;
	printf("Welcome to my fight game. \n");
	printf("Your objective is to reduce the enemy HP to 0. \n");
	printf("You have 3 attack types: Power(P), Normal(N), and Quick(Q). \n");
	printf("Power, normal, and quick attack deals 3x, 2x, and 1x damage respectively. \n");
	printf("Power, normal, and quick attack have 0.40, 0.70, and 0.90 accuracy respectively. \n");
	printf("Your damage will be a random integer between 1 and 10. \n");
	printf("This is a turn based game, you will start first. \n");
	printf("Whoever's health drops to 0 first loses the game. \n");
	printf("Would you like to start(Y/N)?");
	scanf(" %c", &start);
	while(start == 'Y')
	{
		playerRawDamage = rand() %10 + 1;
		enemyRawDamage = rand() %10 + 1;
		playerSuccessRate = rand() %100;
		enemyAttack = rand() %3 +1;
		enemySuccessRate = rand() %100;
		printf("Your turn. Select attack type (P/N/Q): ");
		scanf(" %c", &playerAttackType);
		switch(playerAttackType)
		{
			case 'P':
				{
					if(playerSuccessRate <= 40)
					{
						printf("Successful attack! \n");
						playerDamage = playerRawDamage * 3;
						enemyHP = enemyHP - playerDamage;
						printf("Enemy has %d HP \n", enemyHP);
					}
					else
						printf("You have missed... \n");
					
					break;
				}
			
			case 'N':
				{
					if(playerSuccessRate <= 70)
					{
						printf("Successful attack. \n");
						playerDamage = playerRawDamage * 3;
						enemyHP = enemyHP - playerDamage;
						printf("Enemy has %d HP. \n", enemyHP);
					}
					else
						printf("You have missed... \n");
				
				break;
				
				}
			case 'Q':
				{
					if(playerSuccessRate <= 90)
					{
						printf("Successful attack... \n");
						playerDamage = playerRawDamage;
						enemyHP = enemyHP - playerDamage;
						printf("Enemy has %d HP. \n", enemyHP);
						
					}
					else
						printf("You have missed ... \n");
				
				break;
				}	
		}
		printf("Your opponent's turn. \n");
		
		switch(enemyAttack)
		{
			case 1:
			{
				if(enemySuccessRate <= 40)
				{
					printf("Your opponent has made a successful power attack! \n");
					enemyDamage = enemyRawDamage * 3;
					playerHP = playerHP - enemyDamage;
					printf("You have %d HP left. \n", playerHP);
				}
				else
					printf("Your opponent has missed a power attack. \n");
			break;	
			}		
				
		
		
			case 2:
			{
				if(enemySuccessRate <= 70)
				{
					printf("Your opponent has made a successful normal attack. \n");
					enemyDamage = enemyRawDamage * 2;
					playerHP = playerHP - enemyDamage;
					printf("You have %d HP left. \n", playerHP);
					
				}
				else
					printf("You opponent has missed a normal attack. \n");
			
			break;	
			}
			case 3:
			{
				if(enemySuccessRate <= 90)
				{
					printf("Your opponent has made a successful quick attack. \n");
					enemyDamage = enemyRawDamage;
					playerHP = playerHP - enemyDamage;
					printf("You have %d hp left \n", playerHP);
						
				}
				else
					printf("Your opponent has missed a quick attack. \n");
			
			break;			
			}	
		}
		
		if(playerHP < 0)
		{
			printf("You have lost... \n");
			playerHP = 100;
			enemyHP = 100;
			printf("Would you like to play again? (Y/N)");
			scanf(" %c", &start);
			
		}
		if(enemyHP < 0)
		{
			printf("You win! \n");
			playerHP = 100;
			enemyHP = 100;
			printf("Would you like to play again? (Y/N)");
			scanf(" %c", &start);
				
		}	
			
	}
	return 0;		
}
	
	

