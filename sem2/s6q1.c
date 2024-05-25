#include<stdio.h>// swap by pointer
void main()
{
    int n1,n2,*p1,*p2,temp;
    p1=&n1,p2=&n2;
    printf("enter two number\n");
    scanf("%d%d",&n1,&n2);
    temp=*p1;
    *p1=*p2;
    *p2=temp;
     printf("after swap by pointer n1=%d and n2=%d\n",n1,n2);
}