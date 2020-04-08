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
void climbdownwindow(int);
void makerope();
void jumpintobushes(int);
void limpaway();

void sleep() //Player chooses to sleep
{
	char choice;
	int dieinsleep;
	srand(time(NULL));
	dieinsleep = rand() %1+0; //Random chance of dying.
	if (dieinsleep == 1){ // Player dies in sleep
		printf("You sleep soundly until you realize that you can't wake up sleep/n"); 
		printf("YOU LOSE");
	}
	else if (dieinsleep == 0){
		printf("Suprisingly
	}
	
}






