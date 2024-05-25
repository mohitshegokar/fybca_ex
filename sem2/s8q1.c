#include<stdio.h>
#define MAX(a,b,c) a>b?a>c?a:c:b>c?b:c
void main()
{
    int a,b,c;
printf("enter three number");
scanf("%d%d%d",&a,&b,&c);
printf("maximam number %d",MAX(a,b,c));
}