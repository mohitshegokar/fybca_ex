#include<stdio.h>
int mul(int,int);
void main()
{
    int a,b,r;
    int (*ptr)(int,int);
    ptr=&mul;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    r=(*ptr)(a,b);
    printf("multipliction = %d",r);
}
int mul(int a,int b)
{
    return (a*b);
}