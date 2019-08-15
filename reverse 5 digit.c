#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main( )
{
    int num, a, b, c, d, e, rnum;
    printf("Enter a 5 digit no. \n");
    scanf("%d", &num);
    a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    e=(num/10000)%10;
    printf("\n%d%d%d%d%d\n", a, b, c, d, e);
    rnum=(a*10000)+(b*1000)+(c*100)+(d*10)+(e*1);
    if(rnum==num)
    	printf("\nOriginal and reverse is the same.\n");
    else
    	printf("\nOriginal and reverse is not the same.\n");
    
     char op;
    printf("\n\nDo it again Y/N\n");
    scanf(" %c", &op);
    if(op=='y'||op=='Y')
    {
    	printf("\nGo\n");
    	main();
    }
    if(op=='n'||op=='N')
    {
    	printf("\nThank You\n");
    }
    printf("\nPress any key to exit");
    getche();  
}
