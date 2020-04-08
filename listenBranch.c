#include<stdio.h>
#include<time.h>
#include "functions.h"


void clearScreen() //Clears Screen
{
  sleep(1);
  printf("\e[2J\e[H");
}



int getItem() //Player gets item
{
    char choice;
    int item;
  char itemName[2][15] = {"pocket knife", "baseball bat"};
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
                    printf("You grab your trusty %s.\n", itemName[0]);
                    break;
                case 2:
                    printf("You grab your trusty %s.\n", itemName[1]);
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


void petDog(int item)//When at the door, the player pets the dog
{
  if (item == 3 || item == 0)//If player deos not have item
  {
    printf("As you reach your hand out to pet the dog, it bites it and tries to eat your leg next!\nYou struggle to break free but the killer approaches you!\nUnable to fight both him and the dog, the killer stabs you repeatedly.\nYou died...\n");
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
    printf("As you limp away, you can see the killer in the distance standing still, knowing that he won't be able to get you out in the open...\nYou escaped!");
  }

}

void fightDog(int item)//When at the door, the player fights the dog
{
  if (item == 3 || item == 0)//If player does not have item
  {
    printf("You attempt to fight the dog but you realise that dogs are stronger than they look!\nAs the dog bites you, you can see the killer approaching you from behind.\nYou break free from the dog but the killer eventually catches up to you, stabbing you in the back.\nYou died...\n");
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
    printf("As you run away, you can see the killer in the distance standing still, knowing that he won't be able to catch up to you...\nYou escaped!\n");
  }
}

void runToFrontDoor(int item)//While the killer is salted, the player runs to the door
{
    int x;
    do
    {
        printf("While the killer is disoriented from the spices in his eyes, you book it to the door.\nAs you open it, you see a vicious dog waiting for you, most likely placed there by the killer.\nWhat do you do?\n");
        printf("1-Pet the dog.\n2-Fight the dog.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
        petDog(item);//made
                break;
            case 2:
        fightDog(item);//made
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
  if (item == 3 || item == 0)//If player does not have an item
  {
    printf("You attempt to strike the attacker while he's removing salt from his eyes but he notices you and fights back!\nUnfortunetly he pulls out a knife and stabs you with it multiple times as his eyes water like crazy.\nYou died...\n");
  }
  else
  {
    printf("You approach the killer and quickly prepare to jump him.\n");
    if (item == 1)//If player has pocket knife
    {
      printf("Luckily, you brought a pocket knife with you...\nYou use the knife to stab the killer while he's down and eventually he stops moving...\nYou leave through the door and escape!\n");
    }
    else if (item == 2)//If player has baseball bat
    {
      printf("Luckily, you brought a baseball bat with you...\nYou use the baseball bat and beat the killer with it as he tries to get salt out of his eyes.\nEventually he stops moving and you stop beating him...\nYou walk to the door and finally escape!\n");
    }
  }

}

void throwSpice(int item)//While in closet, the player throws salt at the killer
{
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
        //wait(item); //Import from Emily's branch
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
    int x;
    do
    {
        printf("You get up from under the bed and walk away from the killer, but accidentally make a sound when making your way through the kitchen.\nThe killer hears you and quickly begins to make his way towards your direction.\nWhat do you do?\n");
        printf("1-Attempt to jump the killer.\n2-Hide in a cabinet.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
        printf("Your attempt to jump the killer, but he notices you before you can touch him.\nBefore you have any chance of running away, he reaches for his knife and stabs you with it repeatedly.\nYou died...\n");//PLAYER LOSES
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
    int x;
    do
    {
        printf("Eventually the killer leaves the room and begins to walk down the hallway.\nAs you weight out your options, you realise that staying under the bed wont get you anywhere.\nWhat do you do next?\n");
        printf("1-Walk in the opposite direction of the killer.\n2-Approach the killer.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                walkAwayFromKiller(getItem());//made
                break;
            case 2:
                //approachKiller(getItem());   Import from Emily's branch
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
    int x;
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
                printf("You jump the killer by suprise and punch him in the jaw.\nUnfortunately, he has a knife with him and he stabs you with it.\nWith no way to defend yourself, the killer pokes you some more until you can no longer move.\nYou died...\n");//PLAYER LOSES
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
    int x;
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
                printf("You jump the killer by suprise and punch him in the jaw.\nUnfortunately, he has a knife with him and he stabs you with it.\nWith no way to defend yourself, the killer pokes you some more until you can no longer move.\nYou died...\n");//PLAYER LOSES
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
    int x;
    do
    {
        printf("You decide to stay in your bed and continue to listen... \nYou hear what sounds like footsteps walking towards your direction.\nWhat do you do?\n");
        printf("1-Hide under the covers.\n2-Hide under the bed.\n3-Hide in the closet.\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1:
                printf("As you climb under your covers, you hear someone come through the door.\nPraying that whoever it is won't notice you, the stranger pulls the covers away and you can see a knife in his hand.\nUnable to defend yourself, the stranger stabs you with the knife multiple times.\nYou died...\n"); //PLAYER LOSES
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
