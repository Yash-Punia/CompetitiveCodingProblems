#include <stdio.h>
#include <stdlib.h>

#define MAX 21

/*computer asks player to pick 1,2,3,4 matchstick
  then computer picks
  player picks the last matchstick and loses*/

int main()
{
    int matchLeft = MAX,i;
    int uChoice,cChoice;
    printf("Welcome to the game of Matchsticks!\nThere are a total of 21 matchsticks, last one to pick the stick loses.\n");
    while(matchLeft>1)
    {
        //user turn
        printf("Enter your number = ");
        scanf("%d",&uChoice);
        matchLeft = matchLeft - uChoice;
        printf("Matches left = %d\n", matchLeft);

        //computer turn
        cChoice = 5-uChoice;
        printf("Computer picks %d\n",cChoice);
        matchLeft = matchLeft - cChoice;
        printf("Matches left = %d\n\n", matchLeft);
    }
    scanf("%d",&uChoice);
    matchLeft = matchLeft - uChoice;
    if(matchLeft == 0)
        printf("\nYou Lose!");
    return 0;
}
