#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int main() {
    int min = 1;
    int max = 3;
    int randomNumber;
    int guess;
    int option;
    char name[10][50];
    int scores[10];
    int numplayer=0;
    
    while(1){
        system("cls");
	    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|-----------------(DIGITMAZE GAME)------------------|~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    
    int attempts = 0;
     
    srand(time(0));
    randomNumber = rand() % max + 1;
        printf("|_____________________PLAY GAME\t\t\t[1]___________________________|\n");
        printf("|_____________________GAME MOD\t\t\t[2]___________________________| \n");
        printf("|_____________________SCOREBOARD\t\t[3]___________________________| \n");
        printf("|_____________________HOW TO PLAY\t\t[4]___________________________| \n");
        printf("|_____________________CREDIT\t\t\t[5]___________________________| \n");
        printf("|_____________________EXIT\t\t\t[6]___________________________|\n\n");
        printf("-------------------\nSELECT OPTION: ");
        scanf("%d", &option);
//**********************************************PLAY GAME***********************************************************
if (option == 1)
{
system("cls");
        printf("Enter Player Name without space: ");
        scanf("%s",name[numplayer]);
	    printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|-----------(GUESS BETWEEN %d TO %d)----------------|~~~~~~~~~~~~|",min,max);
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
while (1)
{
printf("|\n|\nENTER YOUR GUESS: ");

scanf("%d",&guess);

attempts++;

if (guess < min || guess > max)
{
    printf("INVALID NUMBER! ONLY GUESS BETWEEN %d TO %d ",min,max );
    continue;
}

if (guess < randomNumber)
{
    printf("TOO LOW TRY AGAIN!\n");
}else if (guess > randomNumber)
{
    printf("TOO HIGH TRY AGAIN!\n");
}else{
    system("cls");
    	printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                      |~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|(CONGRATULATIONS! YOU GUESSED IT RIGHT IN %d ATTEMPTS)|~~~~~~~~~~~|",attempts);
        printf("\n|~~~~~~~~~~~~|                                                      |~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    scores[numplayer]=attempts;
    printf("--------------------------\n");
    printf("press any key to go back: ");
    getch();
    numplayer++;
break;   
}
}
 }
//****************************************************GAME MOD*********************************

if(option == 2){
    system("cls");
	    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|---------------------(GAME MOD)--------------------|~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|____________________________NORMAL \t\t[7]___________________________|\n");
        printf("|____________________________HARD \t\t[8]___________________________|\n");
        printf("|____________________________BACK\t\t[9]___________________________|\n\n");
        printf("-------------------\nSELECT GAME MOD: ");
        scanf("%d",&option);
// **************************************************NORMAL MOD****************************************************
    if (option == 7 )
    {
int min = 1; 
int max = 500;
srand(time(0));
randomNumber = rand() % max +1;

system("cls");
        printf("Enter Player Name without space: ");
        scanf("%s",&name[numplayer]);
	    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|-----------(GUESS BETWEEN %d TO %d)----------------|~~~~~~~~~~~~|",min,max);
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
while (1)
{
    
printf("|\n|\nENTER YOUR GUESS: ");

scanf("%d",&guess);

attempts++;

if (guess < min || guess > max)
{
    printf("INVALID NUMBER! ONLY GUESS BETWEEN %d TO %d ",min,max );
    continue;
}

if (guess < randomNumber)
{
    printf("TOO LOW TRY AGAIN!\n");
}else if (guess > randomNumber)
{
    printf("TOO HIGH TRY AGAIN!\n");
}else{
    system("cls");
    	printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                      |~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|(CONGRATULATIONS! YOU GUESSED IT RIGHT IN %d ATTEMPTS)|~~~~~~~~~~~~|",attempts);
        printf("\n|~~~~~~~~~~~~|                                                      |~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    scores[numplayer]=attempts;
    numplayer++;
    printf("--------------------------\n");
    printf("press any key to go back: ");
    getch();
break; 
}
}
    }
//********************************************HARD MOD********************************************************** 
   if (option == 8 )
    {
int min = 1; 
int max = 1000;
srand(time(0));
randomNumber = rand() % max +1;

    system("cls");
        printf("Enter Player Name without space: ");
        scanf("%s",&name[numplayer]);
	    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|-----------(GUESS BETWEEN %d TO %d)---------------|~~~~~~~~~~~~|",min,max);
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
while (1)
{

printf("|\n|\n|\nENTER YOUR GUESS: ");

scanf("%d",&guess);

attempts++;

if (guess < min || guess > max)
{
    printf("INVALID NUMBER! ONLY GUESS BETWEEN %d TO %d ",min,max );
    continue;
}

if (guess < randomNumber)
{
    printf("TOO LOW TRY AGAIN!\n");
}else if (guess > randomNumber)
{
    printf("TOO HIGH TRY AGAIN!\n");
}else{
    system("cls");
    	printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                      |~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|(CONGRATULATIONS! YOU GUESSED IT RIGHT IN %d ATTEMPTS)|~~~~~~~~~~~|",attempts);
        printf("\n|~~~~~~~~~~~~|                                                      |~~~~~~~~~~|");
    printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    scores[numplayer]=attempts;
    numplayer++;
    printf("--------------------------\n");
    printf("press any key to go back: ");
    getch();
break; 
}
}
}

}
if (option==3)
{ 
        system("cls");
	    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|--------------------(SCORE BOARD)------------------|~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("\n\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|              PLAYER NAME               |       PLAYER SCORE                |\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
for (int i = 0; i < numplayer; i++)
{
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("%d. \t\t%s",i+1,name[i]);
        printf("\t\t\t\t\t%d\n",scores[i]);
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
}
    printf("--------------------------\n");
    printf("press any key to go back: ");
    getch();
}
if(option ==4){
        system("cls");
	    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|-------------------(HOW TO PLAY)-------------------|~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\n");
        printf("IN THIS GAME WE HAVE THREE MODS.\n1.EASY MOD BY DEFAULT\n2.NORMAL MOD\n3.HARD MOD\n\n");
        printf("TO SELECT THESE MODS YOU HAVE TO CHOOSE A NUMBER THAT ARE SHOWING INTO YOUR SCREEN AT MAIN MENU\n\n");
        printf("IN EASY MOD COMPUTER GENERATES NUMBER BETWEEN 1 TO 100\n\n");
        printf("IN NORMAL MOD COMPUTER GENERATES NUMBER BETWEEN 1 TO 500\n\n");
        printf("IN HARD MOD COMPUTER GENERATES NUMBER BETWEEN 1 TO 1000\n\n");
        printf("TO PLAY THIS GAME YOU HAVE TO JUST GUESS BETWEEN THESE NUMBERS \n\nAND YOUR ATTEMPTS WILL BE COUNT AS YOUR SCORE\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|-------------------(ENJOY THE GAME)----------------|~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\n");
    printf("--------------------------\n");
    printf("press any key to go back: ");
    getch();
}
if (option == 5)
{
    system("cls");
	    printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|---------------------(CREDIT)----------------------|~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("\n\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|             NAME             |         ROLL N0.       |         WORK        |\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|          USAMA SANI          |       BCB-23S-050      |   LOGIC BUILDING    |\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~|\n");
         printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|             AHMER            |       BCB-23S-027      |      DESIGNER       |\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|          UM-E-AIMON          |       BCB-23S-28       | CODE IMPLEMENTATION |\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~|\n");
        printf("|       INSHAAL TEHNOON        |       BCB-23S-004      | PROJECT PRESENTATOR |\n");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~~~~|~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("--------------------------\n");
    printf("press any key to go back: ");
    getch();
}
if(option == 6){
    system("cls");
        printf("|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|--------------(THANK YOU FOR PLAYING)--------------|~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~|                                                   |~~~~~~~~~~~~|");
        printf("\n|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n\n");
    printf("GAME EXITING........\n");
    break;
}
    }

    return 0;
}

