#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    for(int i=n;1;i++)
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
        {
            printf("Next prime number : %d",i);
            break;
        }
    }


    return 0;
}
