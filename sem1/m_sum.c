
#include<stdio.h>

int main()
{
    int a[3][3], i, j,sum;

    printf("Enter a 3x3 matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix:\n");

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            sum=sum+a[i][j];
        }
        printf("\n");
    }
    printf("sum of matrix = %d",sum);
    return 0;
}
