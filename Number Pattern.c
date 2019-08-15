#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.


int main()
{
  //Write your code here.
    int n;
    printf("Enter No.\n");
    scanf("%d", &n);
    int n1, n2, n3;
    int bak, bk;
    int i=1;
    int nline=0;
    int sline;
    bk=n;
    int bakr;

    printf("\n\n");
    while(nline<=((n*2)-1)/2)
    {
        nline++;
        for(n1=1;n1<nline;n1++)
        {

            printf("%d ", bak);
            bak--;
        }
        bak = n;
        for(n2=1;n2<=(bk*2)-1;n2++)
        {
            printf("%d ", bk);
        }
        bakr = bk+1;
        bk--;

        for(n3=1;n3<nline;n3++)
        {

            printf("%d ", bakr);
            bakr++;
        }
        printf("\n");


}

//other half
bk = 2;
    while(nline>1)
    {
           nline--;

        for(n1=1;n1<nline;n1++)
        {
            printf("%d ", bak);
            bak--;
        }
        bak = n;

        for(n2=1;n2<=(bk*2)-1;n2++)
        {
            printf("%d ", bk);
        }
        i++;
        bakr=bk+1;
        bk++;
        for(n3=1;n3<nline;n3++)
        {

            printf("%d ", bakr);
            bakr++;
        }


        printf("\n");

    }

}
