/*****************************************************************************
*Emily Gross
*Cody
*Gabriel
*****************************************************************************/
#include <stdio.h>
#include <time.h>

void death()
{
	int choice;
	clearScreen();
	do
	{
		printf("You died! Would you like to play again?\n");
		printf("1-Yes\n2-No\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				main();
				break;
			case 2:
				break;
			default:
				printf("Invalid choice. Try again.\n");
				break;
		}
	}
	while(choice<1 || choice>2);
}

void sleep() //Player chooses to sleep
void clearScreen() //Clears Screen
{
  sleep(1);
  printf("\e[2J\e[H");
}

void investigate1() //Player chooses to investigate
{
	clearScreen();
	item=takeItem();
	investigate2(item);
}

void investigate2(int item);
{
	int choice;
	clearScreen();
	do
void goToSleep() //Player chooses to sleep
{
	char choice;
	int dieinsleep;
	srand(time(NULL));
	dieinsleep = rand() %1+0; //Random chance of dying.
	if (dieinsleep == 1){ // Player dies in sleep
		printf("The killer slit your throat in your sleep/n"); 
		printf("YOU LOSE");
	}
	else if (dieinsleep == 0){
		
	}
	
}


int getItem() //Player gets item
{
	char choice;
	int item;
	printf("Before you leave, would you like to take an item?(Y/N)");
	scanf(" %c", &choice);
	if(choice=='Y' || choice=='y')
	{
		printf("You exit your room and walk down the stairs, taking extra care to not make any noise.\nYou step onto the floor and turn down the hallway to see a silhouette, highlighted by the moonlight streaking in through the window.\n");
		printf("The figure is tall, wide, and incredibly swole.\nThere's no way you can take them on in a fight.\nWhat do you do?\n");
		printf("1-Hide in the kitchen cabinet.\n2-Walk closer towards the figure.\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				hideCabinet(item)
				break;
			case 2:
				walkCloser(item);
				break;
			default:
				printf("Invalid choice. Try again.\n");
				break;
		}
	}
	while(choice<1 || choice>2);
}

void hideCabinet(int item) //Player hides in kitchen cabinet
{
	int choice;
	clearScreen();
	do
	{
		printf("You quickly duck into the kitchen cabinet before the intruder can turn around and see you.\nYou hear them start to move around.\nWhat do you do?\n");
		printf("1-Wait and listen.\n2-Exit the cabinet.\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				waitCabinet(item);
				break;
			case 2:
				leaveCabinet();
				break;
			default:
				printf("Invalid choice. Try again.\n");
				break;
		}
	}
	while(choice<1 || choice>2);
}

void waitCabinet(int item)
{
	int choice;
	clearScreen();
}

void leaveCabinet();
{
	int choice;
	int x;
	clearScreen();
	printf("You decide that hiding in the cabinet was a dumb idea and exit back into the hallway.\nYou shut the door and as you turn to check where the intruder is you bump right into them.\n");
	printf("'Huh. Maybe I should have stayed in the cabinet for a bit longer', you think to yourself as you feel a knife sink into your chest.\n");
	printf("Press any key to continue...\n");
	x=scanf("%d", &choice);
	if(x>0)
	{
		death();
	}
}	

void walkCloser(int item) //Player walks closer towards figure
{
	int choice;
	clearScreen();
	do
	{
		printf("You walk closer to the figure as quietly as you can. They don't turn around to look at you, so it must be working.\nThey seem to be looking around your living room.\nProbably judging your taste in decorations.\n");
		printf("WHat would you like to do next?\n1-Walk EVEN closer.\n2-Turn around and go back to the bottom of the stairs.\n);
		scanf("%d", choice);
		switch(choice)
		{
			case 1:
				superClose();
				break;
			case 2:
				investigate2(item);
				break;
			default:
				printf("Invalid choice. Try again.\n");
				break;
		}
	}
	while(choice<1 || choice>2);
}

void superClose()
{
	int choice;
	int x;
	printf("You walk closer to the figure until you can reach out and touch them.\nWhich you do.\nYou tap them on the shoulder and they whip around to look at you, confused.\n");
	printf("You smile and give them a little wave.\nThey stab you in the chest.\nThis is not the best situation to make new friends.\n");
	printf("Press any key to continue...");
	x=scanf("%d", choice);
	if(x>0)
	{
		death();
	}
	return item;
	
}
void investigate() //Player chooses to investigate
{
	int item = getItem();
	printf("%d", item);
}

void hideInCloset() //Player chooses to hide in closet in bedroom
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

int takeItem() //Ask player if they want to take an item.
{
	char choice;
	int item;
	printf("Before you leave, would you like to take an item?(Y/N)");
	scanf(" %c", &choice);
	if(choice=='Y' || choice=='y')
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
	return item;
}

void clearScreen() //Clears the screen
{
	sleep(1);
	printf("\e[2J\e[H");
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
				goToSleep();
				break;
			case 2:
				investigate1();
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

