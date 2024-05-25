#include<stdio.h>
#define S(x) x*x 
#define C(x) S(x)*x
void main()
{
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    printf("cude is = %d",C(n));
}