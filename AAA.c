#include <stdio.h>
#include <conio.h>

int main()
{
	int n, a=65, b=65, c=65, lim=40;
	
	for(n=0;n<=lim;n++)
	{
		printf("%s\n", &a);
		a=a+1;
		if(a==91)
		{
			a=65;
			while(1<2)
			{
				printf("\n%s%s",&a, &b);
				b++;
				n++;
				if(b==91)
				{
					a=a+1;
					b=65;
					if(a==91)
					{
						a=65;
						b=65;
						while(1<2)
						{
							
							printf("\n%s%s%s",&a, &b, &c);
							c++;
							n++;
							if(c==91)
							{
								b=b+1;
								c=65;
							}
							if(b==91)
							{
								c=65;
								b=65;
								a=a+1;
							}
							if(n==lim)
								break;
							
						}
						
						
					}
				}
				if(n==lim)
					break;
			
				
				
			}
		}
	}
	printf("\n\n%d", lim);
	printf("\n%d, %d, %d", a, b,c);
}