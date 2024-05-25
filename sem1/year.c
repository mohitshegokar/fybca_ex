#include<stdio.h>
int main()
{
    int a;
    printf("enter a year\n");
    scanf("%d",&a);
    if(a%4==0||a%400==0)
    {
        printf("%d is leap year\n",a);
    }
    else if(a%100)
    {
        printf("%d is not leap year\n",a);
    }
    else
    {
        printf("%d is not leap year\n",a);
    }
    return 0;
}