#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    printf("enter a number of matrix");
    for(i=0;i<=1;i++) //row
    {
        for(j=0;j<=2;j++) //column
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("your enter matrix \n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }  
    printf(" transpose matrix \n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}