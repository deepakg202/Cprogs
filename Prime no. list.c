#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main( )
{
    int num, i, bak, n=2;
    char ch;
    do
    {
        printf("Enter no. upto which you want the PRIME NUMBERS: ");
        scanf("%d", &bak);
        printf("\nPRIME NUMBERS upto %d are :- \n\n1 ==>>\t1", bak);
        for(num=1; num<=bak; num++)
        {
            for(i=2; i<num; i++)
            {
                if(num%i!=0)
                    continue;
                else if(num%i==0)
                    break;
            }
            if(num==i)
            {
            	n++;
                printf("\n%d ==>>\t%d", n, num);
            }
        }
        printf("\n\nThere are total %d PRIME NUMBERS between 0 and %d.", n, bak);
        printf("\n\nTry Again Y/N\n\n");
        scanf(" %c", &ch);
    }
    while(ch=='y'||ch=='Y');
    printf("\nxXx..Thanks for Trying..xXx\n");
}