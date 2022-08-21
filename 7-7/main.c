#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Enter range : ");
    scanf("%d%d",&a,&b);
    printf("Prime numbers from range %d to %d : ",a,b);
    for(int i=a;i<b;i++)
    {
        int flag = 0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        printf("%d ",i);
    }


    return 0;
}
