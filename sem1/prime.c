#include<stdio.h>
int main()
{
    int i,a,b,j;
    printf("enter a two number");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(j==i)
        printf("%d\n",i);
    }
    return 0;
}