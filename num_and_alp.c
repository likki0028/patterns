#include<stdio.h>
int main()
{
    int n,i,j,a;
    char A;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=65;
        for(j=1;j<=i;j++)
        {
            
            if((i%2)!=0)
            {
                printf("%d ",j);
            }
            else
            {
                A=(char)a;
                printf("%c ",A);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}