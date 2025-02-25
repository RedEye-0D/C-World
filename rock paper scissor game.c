#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int  game(char you, char comp)
{
    if (you == comp)
    {
        return -1;
    }
    else if (you == 'r' && comp == 's')
    {
        return 1;
    }
    else if (you == 's' && comp == 'r')
    {
        return 0;
    }
    else if (you == 'p' && comp == 'r')
    {
        return 1;
    }
    else if (you == 'r' && comp == 'p')
    {
        return 0;
    }
    else if (you == 's' && comp == 'p')
    {
        return 1;
    }
    else if (you == 'p' && comp == 's')
    {
        return 0;
    }
}

int result(int res, char you, char comp,int choice){
    if (choice == 1){
        switch (res){
            case 0:
                printf("\t\t\t\tComputer win\n");
                break;
            case 1:
                printf("\t\t\t\tYou win\n");
                break;
            default:
                printf("\t\t\t\tGame draw\n");
                break;
        }
        printf("\t\t\t\tYou choose: %c and computer choose: %c\n", you, comp);
    }
    else{
        switch (res){
            case 0:
                printf("\t\t\t\tPlayer 2 win\n");
                break;
            case 1:
                printf("\t\t\t\tPlayer 1 win\n");
                break;
            default:
                printf("\t\t\t\tGame draw\n");
                break;
        }
        printf("\t\t\t\tPlayer 1 choose: %c and Player 2 choose: %c\n", you, comp);
    }
}
    
int main()
{
    char you, comp;
    int choice;
    printf("Want to play with computer or friend (1-Computer/2-Friend): ");
    scanf("%d", &choice);
    if (choice == 1){
        srand(time(NULL));
        int number = rand() % 100;
        if (number < 33)
        {
            comp = 'r';
        }
        else if (number > 33 && number < 66)
        {
            comp = 'p';
        }
        else
        {
            comp = 's';
        }
        scanf("%c", &you);
        printf("\n\t\t\t\tEnter 'r' for ROCK, 'p' for PAPER and 's' for SCISSOR\n\t\t\t\t\t\t\t");
        scanf("%c", &you);
        
    }
    else if (choice == 2)
    {
        printf("\n\t\t\t\t\t\t\tPlayer 1\n");
        scanf("%c", &you);
        printf("\n\t\t\t\tEnter 'r' for ROCK, 'p' for PAPER and 's' for SCISSOR\n\t\t\t\t\t\t\t");
        scanf("%c", &you);
        scanf("%c", &comp);
        printf("\n\n\t\t\t\t\t\t\tPlayer 2\n");
        printf("\n\t\t\t\tEnter 'r' for ROCK, 'p' for PAPER and 's' for SCISSOR\n\t\t\t\t\t\t\t");
        scanf("%c", &comp);
    }
    else {
        printf("Invalid choice");
    }
    int res = game(you, comp);
    result(res, you, comp,choice);
    printf("\n\t\t\t\tr = ROCK\tp = PAPER\ts = SCISSOR\n");
    return 0;
}