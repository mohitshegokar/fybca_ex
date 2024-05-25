#include<stdio.h>
#include<string.h>
void main()
{
    char s1[50],s2[50];
    printf("enter string");
    gets(s1);
    strcpy(s2,s1);
    printf("after copy = %s",s2);
}