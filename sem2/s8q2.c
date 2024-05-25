#include <stdio.h>
void main()
{
    int n,i,s,count=0;
    printf("enter the array size\n");
    scanf("%d",&n);
    int a[n],*ptr;
    ptr=a;
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to find occurrence\n");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(s==*(ptr+i))
        {
            count++;
        }
    }
    printf("The number %d occurs %d times in the array.\n", s, count);
    
}
