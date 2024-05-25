#include<stdio.h>
#define SWAP(a,b,temp) temp=a,a=b,b=temp
int main()
{
    int x,y,temp;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    printf("before swiping x=%d and y=%d\n",x,y);
    SWAP(x,y,temp);
    printf("after swiping x=%d and y=%d\n",x,y);
    return 0;
}
