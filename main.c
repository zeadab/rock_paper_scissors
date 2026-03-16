#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice,int computerChoice);

int main(void)
{
    int computerChoice = getComputerChoice();
    int userChoice = getUserChoice();
    srand(time(NULL));
    switch(userChoice)
    {
        case 1:
        printf(" you chose rock\n");
        break;
        case 2: printf("you chose paper\n");
        break;
        case 3: printf("you chose scissor\n");
        break;
    }
    switch(computerChoice)
    {
    case 1:
        printf(" Computer chose rock\n");
        break;
    case 2: printf("Computer chose paper\n");
        break;
    case 3: printf("Computer chose scissor\n");
        break;
    }
    checkWinner(userChoice,computerChoice);

}

int getComputerChoice()
{
    int choice= (rand()%3)+1;

    return  choice;
};
int getUserChoice()
{
    int choice;
    do
    {
        printf("chose\n");
        printf("1: rock\n");
        printf("2: paper\n");
        printf("3: scissor\n");
        scanf("%d",&choice);
    }while(choice<1 || choice>3);
    return choice;
};
void checkWinner(int userChoice,int computerChoice)
{
    if(userChoice==computerChoice)
    {
        printf("Tie\n");
    }else if((userChoice==1 )&&(computerChoice==3) ||
        (userChoice==2 )&&(computerChoice==1)||
        (userChoice==3 )&&(computerChoice==2))
    {
        printf("winner\n");
    }else
    {
        printf("lost\n");
    }
};