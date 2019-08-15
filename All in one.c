#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main( )
{
    int op, num, i, bak, ch, n=2, ans, mul, lim, x=0, prod, a, y, z;

    do
    {
        printf("Select your option:-\n");
        printf("1)Factorial of a number\n");
        printf("2)Prime no. or not\n");
        printf("3)Odd/Even\n");
        printf("4)List prime numbers upto you want\n");
        printf("5)Power of an Integer\n");
        printf("6)Multiplication Table\n");
        printf("7)Fibbonaci Series\n");
        printf("8)Exit\n");
        printf("\n");
        printf("Enter your choice:");
        scanf("%d", &op);
        printf("\n\n");
        switch (op)
        {
            case 1:
                printf("\n\nEnter a no. for which you want the factorial value: ");
                scanf("%d", &num);
                bak=num;
                i=num-1;
                while(i!=1)
                {
                    num=num*i;
                    i--;
                }
                printf("\nThe FACTORIAL of %d is %d.\n\n", bak, num);
                break;
            case 2:
                printf("\n\nEnter a no. to check whether it is a PRIME NUMBER or NOT:");
                scanf("%d", &num);
                bak=num;
                i=2;
                while(i<num)
                {
                    if(num%i==0)
                    {
                        printf("\n%d is NOT a PRIME NUMBER.\n\n", bak);
                        break;
                    }
                    i++;
                }
                if(num==i)
                    printf("\n%d is a PRIME NUMBER.\n\n", bak);
                break;
            case 3:
                printf("\n\nEnter a no. to check whether it is an EVEN NUMBER or an ODD NUMBER:\n");
                scanf("%d",&num);
                bak=num;
                if(num%2==0)
                {
                    printf("\n%d is an EVEN NUMBER.\n\n", bak);
                    break;
                }
                else
                {
                    printf("\n%d is an ODD NUMBER.\n\n", bak);
                    break;
                }
            case 4:
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
                printf("\n\nThere are total %d PRIME NUMBERS between 0 and %d.\n\n", n, bak);
                break;
            case 5:
                printf("Enter a no. ");
                scanf("%d", &num);
                printf("Raised to the power:");
                scanf("%d", &bak);
                i=num;
                for(ans=2; ans<=bak; ans++)
                {
                    num=i*num;
                }
                if(bak==0)
                {
                    printf("\n%d raised to the power %d is 1\n\n", i, bak);
                    break;
                }
                else
                {
                    printf("\n%d raised to the power %d is %d\n\n", i, bak, num);
                    break;
                }
            case 6:
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
                printf("\n\n");
                break;
            case 7:
                y=0;
                z=1;
                i=1;
                printf("Write the no. of FIBONACCI series\n");
                scanf("%d",&a);
                printf("\n\n.....INITIATING THE FIBONACCI SERIES.....\n");
                while(i<=a)
                {
                    printf("%d->%u\n",i, y);
                    if(i==a&&a%2!=0)
                        break;
                    i++;

                    printf("%d->%u\n",i, z);
                    i++;
                    y=y+z;
                    z=y+z;
                }
                printf("\n\n");
				break;

        }
    }
    while(op<8&&op>0);
    if(op<8&&op>0)
        printf("xXx...Thanks For Trying...xXx\nPress Any Key to Exit.");
    else if(op>7||op<0)
        printf("Program Crashed\n\nExiting...\n\n");
    getche();
}