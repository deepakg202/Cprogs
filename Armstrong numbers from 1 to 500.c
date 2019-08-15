#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main( )
{
    int num, a, b, c, bak;
    printf("Enter no. upto which you want the ARMSTRONG NUMBERS:");
    scanf("%d",&bak);
    printf("Armstrong Numbers from 1 to %d are :-\n\n", bak);
    for(num=1; num<=bak; num++)
    {
        a=num%10;
        b=(num/10)%10;
        c=(num/100)%10;
        if((a*a*a)+(b*b*b)+(c*c*c)==num)
            printf("%d \t", num);
    }
    getche();
}