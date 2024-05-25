#include<stdio.h>
int main()
{
    int num,a,sum=0,i;
    printf("enter a number");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("perfect number");
    }
    else
    {
        printf("not perfect number");
    }
    return 0;
}