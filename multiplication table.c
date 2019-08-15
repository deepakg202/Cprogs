#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main( )
{
	int x=0, mul, lim, prod;
    char op;
	do
	{
    printf("\nEnter no. for which you want the multiplication table\n");
    scanf("%d", &mul);
    printf("\nUpto how much you want it\n\n");
    scanf("%d", &lim);
    lim=lim+1;
    while(x != lim)
    {
    	prod=mul*x;
        printf("\n%d * %d = %d", mul, x, prod);       
        x++;
    }
    printf("\n\nTo try again press Y\n");
    scanf(" %c", &op);
	}while(op=='y'||op=='Y');
	printf("\nThank You\nBye!");
}
