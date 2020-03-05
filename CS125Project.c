/*****************************************************************************
*Emily Gross
*Cody
*Gabriel
*****************************************************************************/
#include <stdio.h>
#include <time.h>

void clearScreen() //Clears Screen
{
  sleep(1);
  printf("\e[2J\e[H");
}

void sleep() //Player chooses to sleep
{
	//Random chance of dying.
}

void investigate() //Player chooses to investigate
{
	char choice;
	int item;
	printf("Before you leave, would you like to take an item?(Y/N)");
	scanf(" %c", &choice);
	if(choice=='Y' || choice=='y' || choice=='N' || choice=='n')
	{
		do
		{
			printf("What item would you like to take?\n1-Pocket knife.\n2-Baseball bat.\n3-Nevermind.");
			scanf("%d", &item);
			switch(item)
			{
				case 1:
					printf("You grab your trusty pocket knife.\n");
					break;
				case 2:
					printf("You grab your trusty baseball bat.\n");
					break;
				case 3:
					printf("You leave your room empty-handed.\n");
					break;
				default:
					printf("Invalid choice. Try again.\n");
					break;
			}
		}
		while(item<1 || item>3);
	}
	else
	{
		item=0;
	}
}

void hideInCloset() //Player chooses to hide in closet
{
	
}

void hideUnderBed() //Player chooses to hide under bed
{
	
}

void listen() //Player chooses to listen
{
	int x;
	do
	{
		printf("You decide to stay in your bed and continue to listen... \nYou hear what sounds like footsteps walking towards your direction.\nWhat do you do?\n");
		printf("1-Hide under the covers.\n2-Hide under the bed.\n3-Hide in the closet.\n");
		scanf("%d", &x);
		switch(x)
		{
			case 1:
				printf("INSERT PLAYER LOSES\n"); //PLAYER LOSES
				break;
			case 2:
				hideUnderBed();
				break;
			case 3:
				hideInCloset();
				break;
			default:
				printf("Invalid choice. Try again.\n");
				break;
		}
	}
	while(x<1 || x>3);
	
}



int main() //Main function
{
	int x;
	
	clearScreen();
	do
	{
		printf("You're sleeping soundly when suddenly you jolt awake.\nYou check your alarm clock: 2:37 AM.\nWhile wondering about what could have woken you, you hear a thud from downstairs.\nWhat do you do?\n");
		printf("1-Go back to sleep.\n2-Go downstairs and investigate.\n3-Wait and listen some more.\n");
		scanf("%d", &x);
		switch(x)
		{
			case 1:
				sleep();
				break;
			case 2:
				investigate();
				break;
			case 3:
				listen();
				break;
			default:
				printf("Invalid choice. Try again.\n");
				break;
		}
	}
	while(x<1 || x>3);
    return 0;
}

//Comment