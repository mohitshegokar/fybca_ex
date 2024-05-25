#include<stdio.h>
void main()
{
    int a,b;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    printf("before swap A = %d and B = %d",a,b);
    a=a^b; //0010^0011=0001(1)  if(a=2 and b=3)  XOR operator equility check=> o/p=0
    b=a^b; //0001^0011=0010(2)
    a=a^b; //0001^0010=0011(3)
    printf("\nafter swap by bitwise operators A = %d and B = %d",a,b);
}