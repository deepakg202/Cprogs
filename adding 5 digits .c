#include <stdio.h>
#include <conio.h>
#include <math.h>
int main( )
{
    int x, y;
    printf("digit No.=");
    scanf("%d",&x);
    y = dig(x);
    printf("\n Sum of digits %d", y);
}
dig(int num)
{
	int sum, a, b, c, d, e;
	a=num%10;
    b=(num/10)%10;
    c=(num/100)%10;
    d=(num/1000)%10;
    e=(num/10000)%10;
    sum=a+b+c+d+e;
    return(sum);
}