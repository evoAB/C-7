#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Armstrong number from 0 to 1000 : ");
    for(n=0;n<1000;n++)
    {
        int num = n, rem=0, count=0;;
        while(num)
        {
            count++;
            num/=10;
        }
        num=n;
        while(num)
        {
            rem+=pow(num%10,count);
            num/=10;
        }
        if(n==rem)
            printf("%d ",n);
    }
    return 0;
}
