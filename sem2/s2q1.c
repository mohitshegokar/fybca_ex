#include<stdio.h> //size of array by macro
#define A(n) n
void main()
{
    int num;
    printf("enter size of array");
    scanf("%d",&num);
    printf("size of array=%d",A(num));
}