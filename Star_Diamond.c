#include<stdio.h>
int main()
{
    int n,mid,i,j;
    printf("Enter no.of rows :");
    scanf("%d",&n);
    if(n%2==0)
    printf("Pattern is not possible");
    else
    {
        for(i=1;i<=n;i++)
        {
            mid=(n+1)/2;
            if(i<=mid)
            {
                for(int s1=1;s1<=mid-i;s1++)
                {
                    printf(" ");
                }
                for( j=1;j<=(2*i-1);j++)
                {
                    printf("*");
                }
            }
            else
            {
                for(int s2=1;s2<=i-mid;i++)
                {
                    printf(" ");
                }
                for(j=1;j<=(2*(n-i))+1;j++)
                {
                    printf("*");
                }
            }
        }
        printf("\n");
    }
    return 0;
}