#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main( )
{
    int num, i;
    char ch;
    do{
    printf("Enter a no. to check whether it is a prime number or not:");
    scanf("%d", &num);
    i=2;
    while(i<num)
    {
    	if(num%i==0)
    	{
    		printf("\nThe number you entered is not a prime number.\n");
    		break;
    	}
    	i++;
    }
    if(num==i)
    	printf("\nThe number you entered is a prime number.\n");
    printf("\nTry Again Y/N\n");
    scanf(" %c", &ch);
    }while(ch=='y'||ch=='Y');
    printf("\nThanks for trying\n");
}