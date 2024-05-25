#include<stdio.h>
#include<string.h>
void main()
{
    char s[50],ch;
    int v,c,d,w,i;
    v=c=d=w=0;
    printf("enter string");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        ch=tolower(s[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            v++;
        }
        else if (ch>='a' && ch<='z')
        {
            c++;
        }
        else if (ch>='0' && ch<='9')
        {
            d++;
        }
        else if (ch==' ')
        {
            w++;
        }
    }
    printf("total vowel = %d\n",v);
    printf("total consonant = %d\n",c);
    printf("total digit = %d\n",d);
    printf("total white space = %d\n",w);
    
}