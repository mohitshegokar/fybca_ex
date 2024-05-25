#include<stdio.h>
union student
{
    char name[10];
    char sub[20];
    float per;
}s;
int main()
{
    printf("enter name of student \n");
    scanf("%s",s.name);
    printf(" student name = %s\n",s.name);
    printf("enter subjects of student \n");
    scanf("%s",s.sub);
    printf(" student subjects = %s\n",s.sub);
     printf("enter percentage of student \n");
    scanf("%f",&s.per);
    printf("percentage of student = %f\n",s.per);
    return 0;
}
