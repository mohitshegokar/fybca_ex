#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*arr,i,max=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
         printf("memory alloction faield...\n");
         return 1;
    }
    printf("enter element of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("maximun number = %d",max);
    return 0;

}