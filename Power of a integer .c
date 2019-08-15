#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
main( )
{
    int num, pow, ans, o;
    char ch;

    printf("Enter a no. ");
    scanf("%d", &num);
    printf("Raised to the power ");
    scanf("%d", &pow);
    o=num;
    for(ans=2; ans<=pow; ans++)
    {
        num=o*num;
    }
    if(pow==0)
        printf("\n%d raised to the power %d is 1\n", o, pow);
    else
        printf("\n%d raised to the power %d is %d\n", o, pow, num);

    printf("\nDo you want to try again Y/N: ");
    scanf(" %c", &ch);
    if(ch=='Y'||ch=='y')
        main();
    else if(ch=='N'||ch=='n')
        printf("\nThank you for trying\n");
    else
        printf("\nProgram crashed\n\n");
}
