#include<stdio.h>
int main()
{
    int a,b,i,fact=1;
    printf("enter 1 for factorial\n");
    printf("enter 2 for check even or odd\n");
    printf("enter 3 for exit\n");
    scanf("%d",&a);
    switch(a)
    {
            case 1:
            printf("enter a number\n");
            scanf("%d",&b);
            for(i=1;i<=b;i++)
            {
                fact=fact*i;
            }
             printf("factor of %d is %d",b,fact);
             break;
             case 2:
             printf("enter a number\n");
             scanf("%d",&b);
             if(b%2==0)
             {
                printf("even number\n");
             }
             else
             {
                printf("odd number\n");
             }
             break;
             case 3:
             printf("exit\n");
             break;
             default:
             printf("enter valid number\n");
             break;
   
    }
    return 0;

}