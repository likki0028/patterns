#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("enter no of rows : ");
    scanf("%d",&n);
    printf("enter no of columns : ");
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}