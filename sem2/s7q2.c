#include<stdio.h>
void main()
{
    int n,a,b;
    printf("enter number for even or add checking\n");
    scanf("%d",&n);
    if(n%2==0)
    {
       printf("number is even\n");
    }
    else
    {
        printf("number is odd\n");
    }
    printf("enter two number for checking max\n");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
       printf("%d is maximan\n",a);
    }
    else
    {
        printf("%d is maximan\n",b);
    }
}