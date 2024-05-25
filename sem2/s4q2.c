#include<stdio.h>
int main()
{
    int sq1[3][3],*ptr[3][3];
    printf("3*3 matrix");
    for (int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 3; j++)
        {
            scanf("%d",&sq1[i][j]);
            ptr[i][j]=&sq1[i][j];
        }
        
    }
    printf("3*3 matrix by pointer\n");
    for (int i = 0; i < 3; i++)
    {
        for ( int j = 0; j < 3; j++)
        {
            printf("%d ",*ptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}