#include<stdio.h>
#include<string.h>
void main()
{
    char ch,ch1;
    printf("enter character");
    scanf("%c",&ch);
    ch1=tolower(ch);
    printf("after change = %c",ch1);
    
}