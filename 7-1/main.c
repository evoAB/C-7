#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,s1=0,s2=1,s3;
    printf("Enter input : ");
    scanf("%d",&n);

    for(int i=2;i<n;i++)
    {
        s3=s1+s2;
        s1=s2;
        s2=s3;
    }
    if(n==1)
        printf("The Nth term of the Fibonnaci series : %d",s1);
    else
        if(n==2)
            printf("The Nth term of the Fibonnaci series : %d",s2);
        else
            printf("The Nth term of the Fibonnaci series : %d",s3);

    return 0;
}
