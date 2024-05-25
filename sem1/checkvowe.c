#include<stdio.h>
#include<math.h>
int main()
{
  char ch;
  printf(" enter a chartecter");
  scanf("%c",&ch);
  if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
     ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
  {
    printf("you enter vowel");
  }
  else if (isdigit(ch))
  {
    printf("you enter digit");
  }
  else 
  {
    printf("you enter consount");
  }
  return 0;
}