#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rem=0,count=0;
    printf("Enter a  number : ");
    scanf("%d",&n);
    int num = n;
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
        printf("It is a Armstrong Number");
    else
        printf("It is not a Armstrong Number");

    return 0;
}
