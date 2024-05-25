#include<stdio.h>
struct student
{
    int id;
    char name[10];
    float per;
}std; 
void main()
{
    printf("enter student ID\n");
    scanf("%d",&std.id);
    printf("enter student name\n");
    scanf("%s",std.name);
    printf("enter student percentage\n");
    scanf("%f",&std.per);
    printf("student detail");
    printf("ID = %d\n",std.id);
    printf("NAME = %s\n",std.name);
    printf("PARCENTAGE = %f\n",std.per);
    
}

