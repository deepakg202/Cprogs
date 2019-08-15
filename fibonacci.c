#include <stdio.h>
#include <conio.h>
#include <math.h>
main( )
{
    long unsigned int a, y=0, z=1, i=1;
    printf("Write the no. of FIBONACCI series\n");
    scanf("%d",&a);
    while(i<=a)
    {
    	printf("%d=>%u \n",i, y);
    	if(i==a&&a%2!=0)
    		break;
    	i++;
    	
    	printf("%d=>%u \n",i, z);
    	i++;
    	y=y+z;
    	z=y+z; 
    }
    printf("\n\n\n");
    main();
}