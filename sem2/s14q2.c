#include<stdio.h>
struct student
{
    int rno;
    char name[50];
    int m1,m2,m3;
}s;
void main()
{
    int avg;
    printf("student detail\n");
    printf("enter rno\n");
    scanf("%d",&s.rno);
    printf("enter name\n");
    scanf("%s",&s.name);
    printf("enter mark 1\n");
    scanf("%d",&s.m1);
    printf("enter mark 2\n");
    scanf("%d",&s.m2);
    printf("enter mark 3\n");
    scanf("%d",&s.m3);
    avg=(s.m1+s.m2+s.m3)/3;
    printf("rollnumber = %d\n",s.rno);
    printf("name = %s\n",s.name);
    printf("avrage = %d\n",avg);
}
