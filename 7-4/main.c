#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,n;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    if(x>y)
        n=x;
    else
        n=y;
    for(int i=n;i>0;i--)
    {
        if(x%i==0 && y%i==0)
        {
            printf("HCF of two number : %d",i);
            break;
        }

    }
    return 0;
}
