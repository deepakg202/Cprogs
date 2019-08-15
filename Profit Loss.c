#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

main( )
{
    int cp, sp, loss, profit;
    printf("Enter Cost price \n");
    scanf("%d", &cp);
    printf("Enter Selling price \n");
    scanf("%d", &sp);
    profit=sp-cp;
    loss=cp-sp;
    if(cp>sp)
    	printf("\nYou have a LOSS of Rs. %d", loss);
    else if(sp>cp)
    	printf("\nYou have a PROFIT of Rs. %d", profit);
    else
    	printf("\nNo LOSS No PROFIT");
     char op;
    printf("\n\nDo it again Y/N\n");
    scanf(" %c", &op);
    if(op=='y'||op=='Y')
    {
    	printf("\n\n");
    	main();
    }
    if(op=='n'||op=='N')
    {
    	printf("\nThank You\n");
    }
    printf("\nPress any key to exit...");
    getche();  
}
