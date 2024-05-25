#include<stdio.h>//avrage of studant
int main()
{
    int n,sum=0,avg;
    printf("enter num of students");
    scanf("%d",&n);
    int arr[n],*ptr[n];
    printf("enter marks");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        ptr[i] = &arr[i];
    }
    printf("avrage of students");
    for(int i=0;i<n;i++)
    {
        sum=sum+ *(ptr[i]);
    }
    avg=sum/n;
    printf("%d",avg);
    return 0;

}