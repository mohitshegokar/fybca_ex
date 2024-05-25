#include<stdio.h>
int main()
{
    int a[3][3],i,j,max,min;
    printf("enter a matrix value 3*3");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("your matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    max=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
            }
        }
    }
    printf("maximam = %d\n",max);
    min=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]<min)
            {
                min=a[i][j];
            }
        }
    }
    printf("minimum = %d",min);
    return 0;
}