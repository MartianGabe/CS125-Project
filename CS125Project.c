/*****************************************************************************
*Emily Gross
*Cody
*Gabriel
*****************************************************************************/
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

int main();
void walkCloser(int item);
void investigate2(int item);
int takeItem();
void hideCabinet(int item);
void waitCabinet(int item);
void leaveCabinet();
void approachKiller(int item, int spice);
void walkDoor(int item, int spice);
void superClose();
void fightDog(int item, int spice);
void petDog();

void investigate1() //Player chooses to investigate
{
	int item;
	clearScreen();
	item=takeItem();
	investigate2(item);
}

void investigate2(int item)
{
	int choice;
	clearScreen();
	do
	{
		printf("You exit your room and walk down the stairs, taking extra care to not make any noise.\nYou step onto the floor and turn down the hallway to see a silhouette, highlighted by the moonlight streaking in through the window.\n");
		printf("The figure is tall, wide, and incredibly swole.\nThere's no way you can take them on in a fight.\nWhat do you do?\n");
		printf("1-Hide in the kitchen cabinet.\n2-Walk closer towards the figure.\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				hideCabinet(item);
				break;
			case 2:
				walkCloser(item);
				break;
			default:
				printf("Invalid choice. Try again.\n");
				break;
		}
	}
	while(choice!=1 && choice!=2);
}

void goToSleep() //Player chooses to sleep
{
	int choice;
	int dieinsleep;
	srand(time(NULL));
	dieinsleep = rand() %1+0; //Random chance of dying.
	if (dieinsleep == 1) // Player dies in sleep
	{
		printf("The killer slit your throat in your sleep.\n"); 
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
		while(choice!=1 && choice!=2);
	}
	else if (dieinsleep == 0)
	{
		
	}
	
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
	while(choice!=1 && choice!=2);
}

void waitCabinet(int item)
{
	int choice;
	int spice = 0;
	clearScreen();
	do
	{
		printf("As you wait in the cabinet, you hear footsteps approach.\nGood thing you didn't leave too early.\nThe footsteps fade, and you wait a few extra seconds before exiting for good measure.\nWhat do you do now?\n");
		printf("1-Follow the direction of the footsteps.\n2-Walk the opposite direction, towards the front door.\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				approachKiller(item, spice);
				break;
			case 2:
				walkDoor(item, spice);
				break;
			default:
				printf("Invalid choice. Try again.\n");
				break;
		}
	}
	while(choice!=1 && choice!=2);
}

void approachKiller(int item, int spice)
{
	int choice;
	clearScreen();
	do
	{
		printf("You head in the direction the footsteps went.\nTheir back is towards you, but they could turn around at any second.\nWhat do you do?\n");
		printf("1-Walk closer to the figure.\n2-Turn around and walk towards the front door.\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				superClose();
				break;
			case 2:
				walkDoor(item, spice);
				break;
			default:
				printf("Invalid choice. Try again.\n");
				break;
		}
	}
	while(choice!=1 && choice!=2);
}

void walkDoor(int item, int spice)
{
	int choice;
	clearScreen();
	do
	{
		printf("You round the corner of the hallway that leads to your front door and see a massive balck dog with red eyes guarding it.\nIt sees you and stands up, beginning to growl.\nThis beast does not seem friendly...\nWhat do you do?\n");
		printf("1-Get ready to fight.\n2-Pet the dog.\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				fightDog(item, spice);
				break;
			case 2:
				petDog();
				break;
			default:
				printf("Invalid choice. Try again.\n");
				break;
		}
	}
	while(choice!=1 && choice!=2);
}

void petDog()
{
	int choice;
	clearScreen();
	printf("It's just a dog!\nAnd all dogs love to be pet!\nYou reach out to pet it and...\nYou're viciously mauled.\nWhat a surpeise.\n");
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
	while(choice!=1 && choice!=2);
}

void fightDog(int item, int spice)
{
	int choice;
	clearScreen();
	printf("You approach the beast and ready yourself for a fight.\nIt lunges for you, and time seems to slow down.\n");
	if(item == 2)
	{
		printf("Good thing you grabbed your baseball bat.\nYou swing as hard as you can and hit the dog square in the head.\nThe beast goes down; home run!\n");
		printf("You book it to the front door and sprint down the street to the nearest gas station, where you call 911.\n");
		do
		{
			printf("You escaped! Would you like to play again?\n");
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
		while(choice!=1 && choice!=2);
	}
	else if(item == 1)
	{
		printf("Good thing you grabbed your pocket knife.\nYou close your eyes and thrust your hand forward.\nYou hear a yelp from the dog and feel something warm on your hand.\nYou try not to think about it.\n");
		printf("You book it to the front door and sprint down the street to the nearest gas station, where you call 911.\n");
		do
		{
			printf("You escaped! Would you like to play again?\n");
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
		while(choice!=1 && choice!=2);
	}
	else if((item!=1 || item!=2)&& spice==1)
	{
		printf("You try to dodge the dog but it catches your leg in it's mouth, sinking it's teeth in.\nYou shove the dog off you and hobble as fast as you can to the front door, slamming it before the dog can get out.\n");
		printf("Each step you take is agony on your injured leg, but the adrenaline in your veins keeps you going.\nYou see the light from the gas station down the road and start to walk faster.\n");
		printf("You hear a noise coming from your house and look to see the figure stumbling out of your front door.\nLucky for you, he's got that spice in his eyes, and is effectively blind.\n");
		printf("You reach the gas station and the clerk takes one look at you-blood pouring down your leg, sweating profusely, and a crazy look in your eyes-and promptly dials 911.\n");
		{
			printf("You escaped! Would you like to play again?\n");
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
		while(choice!=1 && choice!=2);
	}
	else
	{
		printf("You try to dodge the dog but it catches your leg in it's mouth, sinking it's teeth in.\nYou shove the dog off you and hobble as fast as you can to the front door, slamming it before the dog can get out.\n");
		printf("Each step you take is agony on your injured leg, but the adrenaline in your veins keeps you going.\nYou see the light from the gas station down the road and start to walk faster.\n");
		printf("You hear a noise behind you and look to see the killer sprinting towards you.\nYou try to run but you're no match for their speed with your injured leg.\nThe killer finally catches up to you and you feel a knife in your back.\n'So close...' you think.\n");
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
		while(choice!=1 && choice!=2);
	}
}

void leaveCabinet()
{
	int choice;
	clearScreen();
	printf("You decide that hiding in the cabinet was a dumb idea and exit back into the hallway.\nYou shut the door and as you turn to check where the intruder is you bump right into them.\n");
	printf("'Huh. Maybe I should have stayed in the cabinet for a bit longer', you think to yourself as you feel a knife sink into your chest.\n");
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
	while(choice!=1 && choice!=2);
}	

void walkCloser(int item) //Player walks closer towards figure
{
	int choice;
	clearScreen();
	do
	{
		printf("You walk closer to the figure as quietly as you can. They don't turn around to look at you, so it must be working.\nThey seem to be looking around your living room.\nProbably judging your taste in decorations.\n");
		printf("What would you like to do next?\n1-Walk EVEN closer.\n2-Turn around and go back to the bottom of the stairs.\n");
		scanf("%d", &choice);
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
	while(choice!=1 && choice!=2);
}

void superClose()
{
	int choice;
	printf("You walk closer to the figure until you can reach out and touch them.\nWhich you do.\nYou tap them on the shoulder and they whip around to look at you, confused.\n");
	printf("You smile and give them a little wave.\nThey stab you in the chest.\nThis is not the best situation to make new friends.\n");
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
	while(choice!=1 && choice!=2);
	
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
	while(x!=1 && x!=2 && x!=3);
	
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
			printf("What item would you like to take?\n1-Pocket knife.\n2-Baseball bat.\n3-Nevermind.\n");
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
		while(item!=1 && item!=2 && item!=3);
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
	while(x!=1 && x!=2 && x!=3);
    return 0;
}
