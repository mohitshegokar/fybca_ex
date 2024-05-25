#include<stdio.h>
int main()
{
    int a[3][3],sum = 0,i,j;
    printf("enter a matrix value 3*3");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            
            if(i==j||i+j==2)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum diagnoal element = %d",sum);
    return 0;

}