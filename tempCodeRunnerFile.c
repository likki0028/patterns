#include<stdio.h>
int main()
{
    int n,k=1,q=0;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    printf("%d",k);
                }
                else 
                printf("%d",q);
            }
            else 
            {
                if(j%2==0)
                {
                    printf("%d",q);
                }
                else 
                printf("%d",k);
            }
        }
        printf("\n");
    }
    return 0;
}