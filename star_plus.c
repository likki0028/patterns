#include<stdio.h>
int main()
{
    int i,j,n,mid;
    printf("Enter number of rows :");
    scanf("%d",&n);
    if(n%2==0)
    printf("pattern not possible");
    else
    {
        mid=(1+n)/2;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==mid)
                printf("*");
                else if(j==mid)
                printf("*");
                else
                printf(" ");
            }
            printf("\n");
        }

    }
    return 0;
}