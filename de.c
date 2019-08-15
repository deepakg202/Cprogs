#include <stdio.h>
#include <conio.h>

int main()
{
    while(2<3)
    {
        int sum, tens, fifs, huns, ones, tthous=2000, fhun, i=0, twos, fives, twents;
        printf("Enter the amount of money to be withdrawn:");
        scanf("%d", &sum);
        huns=(sum%1000)/100;
        ones=sum%10;
        fifs=0;
        if(sum>2000)
        {
            i=1;
            while(tthous<sum)
            {

                tthous=tthous+2000;
                ++i;
            }
            if((sum/1000)%2!=0)
                i=i-1;
        }
        if(tthous==sum)
            fhun=0;
        if(tthous!=sum)
        {
            tthous=tthous-2000;
            fhun=(sum-tthous)/500;
        }
        if(huns*100==sum)
        {
            tens=0;
            twents=0;
        }
        if(huns*100!=sum)
        {
            twents=sum%100;
            twents=twents/10;
            if(twents%2!=0)
            	tens=1;
            twents=twents/2;
            
        }
        if(huns>5)
        	huns=huns-5;
        if(tens>5)
        {
            fifs=1;
            tens=tens-5;
        }
        
        printf("you need %d two thousansds, %d five hundred, %d hundred, %d fiftys, %d twentys and %d ones\n \n",i, fhun, huns, fifs, twents, ones);
    }

}
