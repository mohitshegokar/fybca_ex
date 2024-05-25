#include<stdio.h>
void main()
{
    int n,i;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n],*ptr[n];
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        ptr[i]=&arr[i];
    }
    printf("elements print by pointer of array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr[i]));
    }
}