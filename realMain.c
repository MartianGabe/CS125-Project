#include <stdio.h>
#include <time.h>


//FUNCTION PROTOTYPES~~~~~~~~~~~~~~~~~~~~~~~

//UNIVERSAL FUNCTIONS

void clearScreen();
int getItem();

//GO TO SLEEP FUNCTIONS
void climbdownwindow(int);
void jumpintobushes(int);
void jumpfightdog(int);
void goToSleep();
void backtosleep();
void makerope();
void limpaway();
void climbdownwindowitem();

//INVESTIGATE FUNCTIONS

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

//LISTEN FUNCTIONS

void petDog2(int);
void fightDog2(int);
void runToFrontDoor(int);
void attackTheKiller(int);
void throwSpice(int);
void hideInCabinet(int);
void walkAwayFromKiller(int);
void waitForKillerToLeave();
void hideUnderBed();
void hideInCloset();
void listen();

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 

//TAKE ITEM AND CLEAR SCREEN~~~~~~~~~~~~~~~~


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

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//GO BACK TO SLEEP BRANCH~~~~~~~~~~~~~~~~~~~
void goToSleep() //Player decides to sleep
{
	int choice;
	int dieinsleep;
	clearScreen();
	srand(time(NULL));
	dieinsleep = rand() %2+0; //50/50 Random chance of dying.
	if (dieinsleep == 1){ // Player dies in sleep
		printf("You fall back asleep soundly until you realize that you can't wake up from your slumber.\nTurns out the killer entered your room and killed you in your sleep.\n"); 
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
	else if (dieinsleep == 0){ // Player does not die in sleep
		do
		{
			printf("By some miracle you wake up after making the smart decision of falling back asleep after hearing a noise in your house even though no one else is supposed to be home.\n");
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

void climbdownwindowitem() //Player picks item
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
	printf("You panic and jump off the ledge, falling onto the bushes below.\nYou quickly fall through the branches, landing right on your leg and feeling it SNAP.\nBut before you can think about how the agony of breaking your leg, you hear barking coming closer from around the corner of the house.\n");
	printf("From around the corner comes a large black dog charging at you, not a nice looking dog but an actual hellhound with red eyes.\nWhat do you do?\n");
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

void limpaway() //Player limps away from chasing dog
{
	int choice;
	clearScreen();
	printf("You try limping away, each step causing agony but the adrenaline from the fall and the chasing dog keeps you going.\nBefore you can get more than a dozen limps away from the danger, you feel a sharp pain on your other leg as the dog sinks its teeth in.\n");
	printf("Falling to the ground, you lay hepless as the dog mauls you to death\n.");
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

void jumpfightdog(int item) //Player fights dog after jumping out of window
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

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//INVESTIGATE BRANCH~~~~~~~~~~~~~~~~~~~~~~~~

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

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//LISTEN BRANCH~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void petDog2(int item)//When at the door, the player pets the dog
{
    clearScreen();
    int choice;
    if (item == 3 || item == 0)//If player deos not have item
    {
        printf("As you reach your hand out to pet the dog, it bites it and tries to eat your leg next!\nYou struggle to break free but the killer approaches you!\nUnable to fight both him and the dog, the killer stabs you repeatedly.\n");
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
        printf("As you reach your hand out to pet the dog, it bites it and tries to eat your leg next!\n");
    if (item == 1)//If player has pocket knife
    {
        printf("Luckily, you brought a pocket knife with you...\nYou use the knife against the dog and finally break free!\n");
    }
    else if (item == 2)//If player has baseball bat
    {
        printf("Luckily, you brought a baseball bat with you...\nYou use the knife against the dog and finally break free!\n");
    }
    printf("As you limp away, you can see the killer in the distance standing still, knowing that he won't be able to get you out in the open...\n");
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

void fightDog2(int item)//When at the door, the player fights the dog
{
    clearScreen();
    int choice;
    if (item == 3 || item == 0)//If player does not have item
    {
        printf("You attempt to fight the dog but you realise that dogs are stronger than they look!\nAs the dog bites you, you can see the killer approaching you from behind.\nYou break free from the dog but the killer eventually catches up to you, stabbing you in the back.\n");
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
        printf("You attempt to fight the dog but you quickly realise that dogs are stronger than they appear!\n");
        if (item == 1)//If player has pocket knife
        {
            printf("Luckily, you brought a pocket knife with you...\nYou use the knife against the dog and finally break free!\n");
        }
        else if (item == 2)//If player has baseball bat
        {
            printf("Luckily, you brought a baseball bat with you...\nYou use the knife against the dog and finally break free!\n");
        }
        printf("As you run away, you can see the killer in the distance standing still, knowing that he won't be able to catch up to you...\n");
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

void runToFrontDoor(int item)//While the killer is salted, the player runs to the door
{
    clearScreen();
    int x;
    do
    {
        printf("While the killer is disoriented from the spices in his eyes, you book it to the door.\nAs you open it, you see a vicious dog waiting for you, most likely placed there by the killer.\nWhat do you do?\n");
        printf("1-Pet the dog.\n2-Fight the dog.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                petDog2(item);//made
                break;
            case 2:
                fightDog2(item);//made
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
  }
  while(x<1 || x>2);
}

void attackTheKiller(int item)//While the killer is salted, the player attacks the killer
{
    clearScreen();
    int choice;
    if (item == 3 || item == 0)//If player does not have an item
    {
        printf("You attempt to strike the attacker while he's removing salt from his eyes but he notices you and fights back!\nUnfortunetly he pulls out a knife and stabs you with it multiple times as his eyes water like crazy.\n");
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
        printf("You approach the killer and quickly prepare to jump him.\n");
        if (item == 1)//If player has pocket knife
        {
            printf("Luckily, you brought a pocket knife with you...\nYou use the knife to stab the killer while he's down and eventually he stops moving...\nYou leave through the door and call the police.\n");
        }
        else if (item == 2)//If player has baseball bat
        {
            printf("Luckily, you brought a baseball bat with you...\nYou use the baseball bat and beat the killer with it as he tries to get salt out of his eyes.\nEventually he stops moving and you stop beating him...\nYou walk to the door and step outside...\n");
        }
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

void throwSpice(int item)//While in closet, the player throws salt at the killer
{
  clearScreen();
    int x;
    do
    {
        printf("You jump out of the spice cabinet and throw a bunch of spices in the killer's eyes disorienting him.\nWith your adrenaline pumping and limited time, you have to make a decision quick..\nWhat do you do?\n");
        printf("1-Book it for the front door\n2-Attack the killer.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
        runToFrontDoor(item);//made
                break;
            case 2:
        attackTheKiller(item);//made
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
  }
  while(x<1 || x>2);
}


void hideInCabinet(int item)//After making a noise, the player hides in the cabinet
{
  clearScreen();
    int x;
    do
    {
        printf("You hide in the spice cabinet and hear the killer pacing around the kitchen.\nWhat do you do?\n");
        printf("1-Pop out and throw spice in the killers eyes.\n2-Wait for the killer to leave.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
        throwSpice(item);//made
                break;
            case 2:
        waitCabinet(item); //Import from Emily's branch
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
  }
  while(x<1 || x>2);
}


void walkAwayFromKiller(int item)//After leaving the bed, the player walks away from the killer
{
  clearScreen();
    int x;
    int choice;
    do
    {
        printf("You get up from under the bed and walk away from the killer, but accidentally make a sound when making your way through the kitchen.\nThe killer hears you and quickly begins to make his way towards your direction.\nWhat do you do?\n");
        printf("1-Attempt to jump the killer.\n2-Hide in a cabinet.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
        printf("Your attempt to jump the killer, but he notices you before you can touch him.\nBefore you have any chance of running away, he reaches for his knife and stabs you with it repeatedly.\n");
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
                break;
            case 2:
        hideInCabinet(item);//made
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
  }
  while(x<1 || x>2);
}


void waitForKillerToLeave()//While under bed, player waits for killer to leave
{
  clearScreen();
    int x;
    do
    {
        printf("Eventually the killer leaves the room and begins to walk down the hallway.\nAs you weight out your options, you realise that staying under the bed wont get you anywhere.\nWhat do you do next?\n");
        printf("1-Walk in the opposite direction of the killer.\n2-Approach the killer.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                walkAwayFromKiller(takeItem());//made
                break;
            case 2:
                approachKiller(takeItem(), 0);   //Import from Emily's branch
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
  }
  while(x<1 || x>2);
}

void hideUnderBed()//Player chooses to hide under bed
{
  clearScreen();
    int x;
    int choice;
    do
    {
        printf("As you hide under the bed, you see the killer's feet enter the room.\nYou hold your breath and pray that he doesn't notice you.\nWhat do you do?\n");
        printf("1-Wait for him to leave.\n2-JUMP HIM.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                waitForKillerToLeave();//made
                break;
            case 2:
                printf("You jump the killer by suprise and punch him in the jaw.\nUnfortunately, he has a knife with him and he stabs you with it.\nWith no way to defend yourself, the killer pokes you some more until you can no longer move.\n");
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
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
  }
  while(x<1 || x>2);
}

void hideInCloset()//Player hides in the closed
{
  clearScreen();
    int x;
    int choice;
    do
    {
        printf("You quickly stuff yourself in the closet and shut the doors.\nSoon after, a guy walks into the room with a knife in hand while you hold your breath.\nHe doesn't seem friendly.\nWhat do you do next?\n");
        printf("1-Wait for him to leave.\n2-JUMP HIM.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                waitForKillerToLeave();//made
                break;
            case 2:
                printf("You jump the killer by suprise and punch him in the jaw.\nUnfortunately, he has a knife with him and he stabs you with it.\nWith no way to defend yourself, the killer pokes you some more until you can no longer move.\n");
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
                break;
            default:
                printf("Invalid choice. Try again.\n");
                break;
        }
  }
  while(x<1 || x>2);
}


void listen() //Player chooses to listen
{
  clearScreen();
    int x;
    int choice;
    do
    {
        printf("You decide to stay in your bed and continue to listen... \nYou hear what sounds like footsteps walking towards your direction.\nWhat do you do?\n");
        printf("1-Hide under the covers.\n2-Hide under the bed.\n3-Hide in the closet.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                printf("As you climb under your covers, you hear someone come through the door.\nPraying that whoever it is won't notice you, the stranger pulls the covers away and you can see a knife in his hand.\nUnable to defend yourself, the stranger stabs you with the knife multiple times.\n");
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

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//MAIN FUNCTION~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

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


//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
