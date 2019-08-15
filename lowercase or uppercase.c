#include <stdio.h>
#include <conio.h>
#include <math.h>
main( )
{
    int a;
    char ch;
    do
    {
        printf("Enter alphabet \n\n");
        scanf("%c", &a);
        if(a>=65&&a<=90)
        {
            printf("\nUPPERCASE");
        }
        else if(a>=97&&a<=122)
        {
            printf("\nlowercase");
        }
        else
            printf("\nNot An Alphabet");
        printf("\n\nDo you want to try again Y/N: ");
        scanf(" %c", &ch);
    }
    while(ch=='y'||ch=='Y');
    printf("\n\nThanks For Trying\n\n");
}
