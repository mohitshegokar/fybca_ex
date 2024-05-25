#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*arr;
    printf("enter size of array");
    scanf("%d",&n);
    arr=(int *) malloc(n*sizeof(int));
    printf("enter element of array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("print element of array after dy");
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}