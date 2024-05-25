#include<stdio.h>
void main()
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int i,arr[n],*ptr[n];
    printf("enter elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        ptr[i]=&arr[i];
    }
    printf("your print by pointer array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr[i]));
    }
}