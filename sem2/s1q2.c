//s1 q2 number present in array
#include<stdio.h>
int main()
{
    int arr[5],flg=0,num;
    printf("enetr array\n");
    for (int i=0;i<5;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("your array\n");
     for (int i=0;i<5;i++)
    {
       printf("%d ",arr[i]);
    }
    printf("\nenter number for search\n");
    scanf("%d",&num);
    for (int i=0;i<5;i++)
    {
       if(arr[i]==num)
       {
        flg++;
       }
    }
    if(flg>0)
    {
        printf("number is present in array\n");
    }
    else
    {
        printf("number is not present in array\n");
    }

    return 0;
}