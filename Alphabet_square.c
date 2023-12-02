#include<stdio.h>
int main()
{
    int n,i,j,a;
    char A;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=65;
        
        for(j=1;j<=n;j++)
        {
            A=(char)a;
            printf("%c ",A);
            a++;
        }
        printf("\n");
    }
    return 0;
}