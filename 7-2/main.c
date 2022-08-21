#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,s1=0,s2=1,s3;
    printf("Enter input : ");
    scanf("%d",&n);
    printf("Fibonacci series : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",s1);
        s3=s1+s2;
        s1=s2;
        s2=s3;
    }
    return 0;
}
