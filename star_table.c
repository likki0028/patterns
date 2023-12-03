#include<stdio.h>
int main()
{
    int n,i,j,s;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            for(j=1;j<=2*n-1;j++)
            {
                printf("*");
            }
        }
        else 
        {
            for(j=1;j<=n+1-i;j++)
            {
                printf("*");
            }
            for(s=1;s<=2*(i-1)-1;s++)
            {
                printf(" ");
            }
            for(j=1;j<=n+1-i;j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}