#include<stdio.h>
#define MAX(a,b) a>b?a:b
void main()
{
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("MAXIMUM NUMBER BY MACRO = %d",MAX(a,b));
}