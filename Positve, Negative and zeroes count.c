#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main( )
{
    int num, p=0, n=0, z=0, t=0;
    char ch, op;
    do
    {
        printf("Enter no.\n");
        scanf("%d", &num);
        t++;
        if(num>0)
            p++;
        else if(num<0)
            n++;
        else
            z++;
        printf("\nEnter another number Y/N\n");
        scanf(" %c", &ch);
        printf("\n");
    }
    while(ch=='y'||ch=='Y');
    printf("\nYou entered %d positive, %d negative and %d zero.\nIn total you entered %d numbers.", p, n, z, t);
    printf("\nDo You want to try again Y/N: ");
    scanf(" %c", &op);
    if(op=='y'||op=='Y')
        main();
}