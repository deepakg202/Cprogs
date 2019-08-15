#include <stdio.h> 
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main( )
{
    int num, bak=71, snum=70, sbak=65, i=71, s=2, x=4;
    	for(num=65; num<=bak; num++)
        {
            printf("%c",num);
            if(num==bak)
            {
            	for(;s<2;s++)
            	{
            		printf(" ");
            	}
            	for(;snum>=sbak;snum--)
            	{
            		printf("%c", snum);
            		if(snum==sbak)
            			break;
            	}
                num=64;
                bak--;
                snum=i-1;
                printf("\n");
                i=i-1;
                x=x-2;
                s=x-1;
            }
        }
    printf("\nxXx..Thanks for Trying..xXx\n");
    getche();
}