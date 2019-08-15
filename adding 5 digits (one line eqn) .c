#include <stdio.h>
#include <conio.h>

int main()
{
   int fdig, rdig;
   scanf("%d", &fdig);
   rdig=(fdig%10)+(fdig%100)/10+(fdig%1000)/100+(fdig%10000)/1000+(fdig%100000)/10000;
   printf("%d", rdig);

}