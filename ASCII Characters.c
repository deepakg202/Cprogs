#include <stdio.h>
main( )
{
	int num=0;
	while(num<=255)
	{
		printf("%d\t%c\n", num, num);
		num++;
	}
	printf("\n\nPress any key to exit...");
	getche();
}
