#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int power(int, int);
main( )
{
	int num, p, an;
	printf("Enter a number\n");
	scanf("%d", &num);
	printf("raised to the power:\n");
	scanf("%d", &p);
	an=power(num,p);
	printf("%d", an);
}
int power(int a, int b)
{
	int x, y;
	y=a;
	for(x=2;x<=b;x++)
	{
		a=y*a;
	}
	return a;
}