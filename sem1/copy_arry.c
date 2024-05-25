#include<stdio.h>
int copyarray(int a[5]);
int main()
{
    int a[5],i;
    printf("enter the array element");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d",copyarray(a)[i]);
    }    
    return 0;
}
int copyarray(int a[5])
{
    int b[5],i;
    for(i=0;i<5;i++)
    {
        b[i]=a[i];
    }

    return b;
}