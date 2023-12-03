#include<stdio.h>
int main()
{
    int n,mid,i,j,s;
    printf("Enter no of rows :");
    scanf("%d",&n);
    mid=n/2+1;
    if(n%2==0)
    {   
            printf("pattern not possible");
        }
        else
        {
            for(i=1;i<=n;i++)
        {
            if(i<=mid)
            {
                for(s=1;s<=(mid-i);s++)
                {
                    printf(" ");
                }
                for(j=1;j<=2*i-1;j++)
                {
                    printf("*");
                }
            }
            else 
            {
                for(s=1;s<=i-mid;s++)
                {
                 printf(" ");
                }
            int f=2*(n-i)+1;
                for(j=1;j<=f;j++)
                {
                    printf("*");
                }
            }   
            printf("\n");
        }
    }
    return 0;
}