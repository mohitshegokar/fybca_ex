#include<stdio.h>
 fib(num);
int main()
{
    int num,i;
    printf("enter the limit of fibonachi\n");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    printf("%d\n",fib(i));
return 0;
}
int fib( int num)
{
    if(num==0)
    return 0;
    else if(num==1)
    return 1;
    else
    return fib(num-1)+fib(num-2);
}