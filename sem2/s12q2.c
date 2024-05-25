#include<stdio.h>
int avg(int *arr,int n);
int main()
{
    int n,i,ans;
    printf("enter size of array");
    scanf("%d",&n);
    int a[n],*arr;
    printf("enter element of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    arr=a;
    ans=avg(arr,n);
    printf("avrage = %d",ans);
    return 0;
}
int avg(int *arr,int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+(arr[i]);
    }
    return sum/n;
}