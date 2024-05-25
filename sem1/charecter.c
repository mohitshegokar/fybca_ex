#include<stdio.h>
int main()
{
    char ch='A',i,j;
    for(i=1;i<=4;i++)
    {
        for(j=i;j<=4;j++)
        {
            printf("%c\t",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}