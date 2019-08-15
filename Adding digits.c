#include <stdio.h>
#include <conio.h>
#include <math.h>
int main( )
{
    int a, b;
    printf("digit No.=");
    scanf("%d",&a);
    b = sum(a);
    printf("\n Sum of digits %d", b);
}
sum(int x)
{
    int y=0;
    while (x != 0)
    {
        y += x % 10;
        x = x/10;
    }
    return(y);
}