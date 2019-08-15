#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main( )
{
    int num, i, bak;
    char ch;
    do{
    printf("Enter a no. for which you want the factorial: "); 
    scanf("%d", &num);
    bak=num;
    i=num-1;
    while(i!=1)
    {
    	num=num*i;
    	i--;
    }
    printf("\nThe Factorial of %d is %d.\n", bak, num);
    printf("\nTry Again Y/N\n");
    scanf(" %c", &ch);
    }while(ch=='y'||ch=='Y');
    printf("\nxXx..Thanks for Trying..xXx\n");
}