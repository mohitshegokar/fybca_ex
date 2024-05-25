#include<stdio.h>
void descending (int a[5])
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
int main()
{
    int a[5],i;
    
    printf("enter the array element\n");
    for(i=0;i<5;i++);
    {
        scanf("%d",&a[i]);
    }
    descending(a);
    printf("descending order element\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}