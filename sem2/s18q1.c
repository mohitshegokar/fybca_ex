#include<stdio.h>
#define PI 3.14
int main()
{
    float r,ans;
    printf("enter radius of circle");
    scanf("%f",&r);
    ans=PI*r*r;
    printf("area of circle = %f",ans);
    return 0;
}