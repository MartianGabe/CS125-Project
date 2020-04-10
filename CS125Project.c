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

//GO TO SLEEP FUNCTIONS
void sleep();
void backtosleep();
void climbdownwindowitem();
void climbdownwindow(int);
void makerope();
void jumpintobushes(int);
void limpaway();
void jumpfightdog(int);

void sleep() //Player decides to sleep
{
	int choice;
	int dieinsleep;
	clearScreen();
	srand(time(NULL));
	dieinsleep = rand() %2+0; //50/50 Random chance of dying.
	if (dieinsleep == 1){ // Player dies in sleep
		printf("You fall back asleep soundly until you realize that you can't wake up from your slumber. Turns out the killer entered your room and killed you in your sleep./n"); 
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
					printf("Invalid choice. Try again. \n");
					break;
			}
		}
		while(choice!=1 && choice!=2);
	}
	else if (dieinsleep == 0){
		do
		{
			printf("By some miracle you wake up after making the smart decision of falling back asleep after hearing a noise in your house even though no one else is supposed to be home.");
			printf("You hear noises upstairs in the same floor your bedroom is on.\nNow you know for sure someone or something is making those noises.\n");
			printf("There seem to be footsteps outside of your door coming closer and closer....\nWhat do you do?\n");
			printf("1-Go back to sleep.\n2-Climb down the window.\n");
			scanf("%d", &choice);
			switch(choice)
			{
				case 1:
					backtosleep();
					break;
				case 2:
					climbdownwindowitem();
					break;
				default:
					printf("Invalid choice. Try again. \n");
					break;
			}
		}
		while(choice!=1 && choice!=2);
	}
	
}

void backtosleep() // Player chooses to go back to sleep again
{
	int choice;
	clearScreen();
	printf("You make the wise decision of trying to fall back sleep.\nBut before you can get back to your slumber, your door creaks open and you jolt up and look towards the door.\n");
	printf("There stands a tall figure, staring at your from the darkness.\n Before you can scream the figure rushes over and you remain helpless as a knife enters your chest.\n"); 
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
				printf("Invalid choice. Try again. \n");
				break;
		}
	}
	while(choice!=1 && choice!=2);
}

void climbdownwindowitem() //Player chooses to investigate
{
    int item;
    clearScreen();
    item=takeItem();
    climbdownwindow(item);
}

void climbdownwindow(int item) //Player chooses to climb down the window
{
	int choice;
	clearScreen();
	printf("As the footsteps begin approaching closer, you decide to climb down the window from the second story.\nYou see that there are bushes right underneath your window.\nYou think that maybe the bushes could cushion your fall if you try to jump\n");
	printf("However, you also have plenty of shirts in your drawer next to the window.\nYou think that these shirts could make for a lengthy and usefull rope that you could use to climb down.\nWhat do you do?\n"); 
	do
	{
		printf("1-Jump from your window into the bushes below\n2-Make a rope out of shirts\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				jumpintobushes(item);
				break;
			case 2:
				makerope();
				break;
			default:
				printf("Invalid choice. Try again. \n");
				break;
		}
	}
	while(choice!=1 && choice!=2);
}

void makerope() //Player chooses to make a rope
{
	int choice;
	clearScreen();
	printf("You begin grabbing shirts and tying them together, beginning to form a lengthy rope.\nYou finally deem it sturdy enough to support your weight...hopefully.\nBefore you can tie one end to one leg of your bed, your door creeks open.\n");
	printf("There stands a tall figure, staring at your from the darkness, the moonlight from the open window outlining his silhouette.\n Before you can get back up and head for the window, the figure rushes over and you remain helpless as a knife enters your back.\n");
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
				printf("Invalid choice. Try again. \n");
				break;
		}
	}
	while(choice!=1 && choice!=2);
}

void jumpintobushes(int item) //Player chooses to jump out of the window
{
	int choice;
	clearScreen();
	printf("You open up the window and dangle your legs over the ledge.\nYou start having second thoughts about this idea.\nYou sit there so long doubting this jump that the door behind you creaks open.\nYou turn around and see a large figure rushing towards you.\n");
	printf("You panic and jump off the ledge, falling onto the bushes below.\nYou quickly fall through the branches, landing right on your leg and feeling it SNAP.\nBefore you can think about how much the agony of breaking your leg, you hear barking coming closer from around the corner of the house.\n");
	printf("From around the corner comes a large black dog charging at you, not a nice looking dog but an actual hellhound.\nWhat do you do?\n);
	do
	{
		printf("1-Limp away with your injury\n2-Take on the dog\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				limpaway();
				break;
			case 2:
				jumpfightdog(item);
				break;
			default:
				printf("Invalid choice. Try again. \n");
				break;
		}
	}
	while(choice!=1 && choice!=2);
}

void limpaway()
{
	int choice;
	clearScreen();
	printf("You try limping away, each step causing agony but the adrenaline from the fall and the chasing dog keeps you going.\n Before you can get more than a dozen limps away from the danger, you feel a sharp pain on your other leg as the dog sinks its teeth in.\n);
	printf("Falling to the ground, you lay hepless as the dog mauls you to death\n.);
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
				printf("Invalid choice. Try again. \n");
				break;
		}
	}
	while(choice!=1 && choice!=2);
}

void jumpfightdog(int item)
{
	int choice;
	clearScreen();
    if (item == 3 || item == 0)//If player does not have item
    {
        printf("You attempt to fight the dog but you realise that this dog is very strong!\nAs the dog bites your other healthy leg, you can see the killer is no longer at the window.\nYou break free from the dog and try to crawl away, but you hear footsteps approaching you and you get stabbed by the killers knife in the back.\n");
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
    else
    {
        printf("You attempt to fight the dog but you quickly realise that this dog is very strong!\n");
        if (item == 1)//If player has pocket knife
        {
            printf("Luckily, you brought a pocket knife with you...\nYou use the knife against the dog and quickly break free!\n");
        }
        else if (item == 2)//If player has baseball bat
        {
            printf("Luckily, you brought a baseball bat with you...\nYou use the knife against the dog and quickly break free!\n");
        }
        printf("As you quickly limp away, you can see the killer in the distance standing in the window, knowing that he won't be able to catch up to you...\n");
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
}