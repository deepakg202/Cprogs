#include <header.h>
main()
{
	int num, p, an;
	printf("Enter a number\n");
	scanf("%d", &num);
	printf("raised to the power:\n");
	scanf("%d", &p);
	an=power(num,p);
	printf("%d", an);
}