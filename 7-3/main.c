#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,s1=0,s2=1,s3,flag=0;
    printf("Enter input : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(s1==n)
        {
            printf("A given number is in the Fibonacci series.");
            flag=1;
            break;
        }
        s3=s1+s2;
        s1=s2;
        s2=s3;
    }
    if(flag==0)
        printf("A given number is not in the Fibonacci series.");

    return 0;
}
