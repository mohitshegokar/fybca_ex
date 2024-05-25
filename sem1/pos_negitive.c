#include<stdio.h>
int main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    if(num<0)
    {
        printf("you enter negitive number");
    }
    else if(num>0)
    {
        printf("you enter positive number");
    }
    else 
    {
        printf("you enter zero");
    }
    return 0;
}
