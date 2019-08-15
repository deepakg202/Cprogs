#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int x=21, comp, usr;

    printf("No. of matchsticks avalable now = %d\nChoose no. of matchsticks from 1 - 4\n", x);

    while(x>1)
    {

        scanf("%d", &usr);
        comp=(5-usr);
        if(usr>4||usr<0)
        {
            printf("\nInvalid turn\n");
            break;
        }
        x = x-usr;
        printf("\nNo. of matchsticks avalable now = %d\nComputer's turn.....\n\n", x);
        printf("\nComputer chose %d matchsticks\n", comp);
        x= x-comp;
        printf("\nNo. of matchsticks avalable now = %d\nChoose again no. of matchsticks from (1 - 4)\n", x);
    }
    if(x==1)
        printf("\nComputer won as the last matchstick has to be picked by you\n");
    else
        printf("\nYou are not allowed to choose more than 4 matchsticks or less than 1 matchsticks. \nSo you are disqualified\n");
    char op;
    printf("\n\nTo play again press 'y'\nor\nPress any key to exit\n");
    scanf(" %c", &op);
    if(op=='y'||op=='Y')
        main();
    else
    {
        printf("Bye!");
        getche();
    }
}
