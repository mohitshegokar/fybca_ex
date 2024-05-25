#include<stdio.h>
int main()
{
    int num,i,a=0,b=1,c;
    printf("enter the limit of fibinachi\n");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}