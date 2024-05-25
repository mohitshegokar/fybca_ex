#include<stdio.h>
union student
{
    char name[20];
    char sub[20];
    float per;
}s1,s2;
void main()
{
    printf("enter detail of 1st student\n");
    printf("enter name of student 1\n");
    scanf("%s",s1.name);
    printf("first student name = %s\n",s1.name);
    printf("enter subjects of student 1\n");
    scanf("%s",s1.sub);
    printf("first student subjects = %s\n",s1.sub);
    printf("enter percentage of student 1\n");
    scanf("%f",&s1.per);
    printf("first student percentage = %f\n",s1.per);
    printf("enter detail of 2st student\n");
    printf("enter name of student 2\n");
    scanf("%s",s2.name);
    printf("second student name = %s\n",s2.name);
    printf("enter subjects of student 2\n");
    scanf("%s",s2.sub);
    printf("second student subjects = %s\n",s2.sub);
    printf("enter percentage of student 2\n");
    scanf("%f",&s2.per);
    printf("percentage of second student = %f\n",s2.per);

}