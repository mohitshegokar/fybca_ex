#include<stdio.h>
int main()
{
    int arr[5],*p1,**p2,i;
    p1=arr;
    p2=&p1;
    printf("enter array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array printf by double pointer\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",*(*p2+i));
    }
    return 0;
}
