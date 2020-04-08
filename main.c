/*****************************************************************************
*Emily Gross
*Cody
*Gabriel
*****************************************************************************/
#include "functions.h"
#include<stdio.h>



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
                //goToSleep();
                break;
            case 2:
                //investigate();
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
 
