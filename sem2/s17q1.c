#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    printf("enter length of string\n");
    scanf("%d",&n);
    char s1[n],s2[n];
    printf("enter string 1\n");
    scanf("%s",&s1);
    printf("enter string 2\n");
    scanf("%s",&s2);
    strcat(s2,s1);
    printf("after copied = %s",s2);
}