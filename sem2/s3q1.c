#include<stdio.h>// mxmimam macro 
#define MAX(a,b) a>b? a:b
void main()
{
    int x,y;
    printf("enter number x and y");
    scanf("%d%d",&x,&y);
    printf("maximum = %d", MAX(x,y));
}