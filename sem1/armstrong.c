#include<stdio.h>
int main()
{
    int num,a,num1=0,r;
    printf(" enter a number");
    scanf("%d",&num);
    a=num;
    while(num>0)
    {
       r=num%10;
       num1=(r*r*r)+num1;
       num=num/10;
    }
    if(num1==a)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not armstrong number");
    }
    return 0;
}