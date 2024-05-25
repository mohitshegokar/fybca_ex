#include<stdio.h>
int main()
{
    int n,i,j,mul;
    printf("enter a number :\n");
    scanf("%d",&n);
    for(i=n;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            mul=i*j;
            printf("%d * %d = %d\n",i,j,mul);
        }
    }
    return 0;
}