#include<stdio.h>
#define NUM(x) x>0?printf("positive"):x<0?printf("negative"):printf("zero")
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    NUM(n);
    return 0;
}