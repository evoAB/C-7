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
            if(i==1)
                printf("%d and %d are co-prime numbers.",x,y);
            else
                printf("%d and %d are not co-prime numbers.",x,y);
            break;
        }
    }
    return 0;
}
