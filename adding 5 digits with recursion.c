#include <stdio.h>
#include <conio.h>
#include <math.h>
main( )
{
    int a ;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    a = sumdig ( n ) ;
    printf ( "\nthe sum of digits of %d is %d",n, a ) ;
}
sumdig ( int num )
{
    static int sum ;
    int a, b ;
    a = num % 10 ;
    b = ( num - a ) / 10 ;
    sum = sum + a ;
    if ( b != 0 )
        sumdig ( b ) ;
    else
        return ( sum ) ;
}