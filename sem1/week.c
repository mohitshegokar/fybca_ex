#include<stdio.h>
int main()
{
    int num;
    printf("enter number 1 to 7 :\n");
    scanf("%d",&num);
    switch(num)
   {
    case 1:
    printf("sunday");
    break;
    case 2:
    printf("monday");
    break;
    case 3:
    printf("tuesday");
    break;
    case 4:
    printf("wednusday");
    break;
    case 5:
    printf("thusday");
    break;
    case 6:
    printf("friday");
    break;
    case 7:
    printf("saturday");
    break;
    default:
    printf("enter valid number");
   }
}