#include<stdio.h>
struct studant
{
    int emp_id;
    char emp_name[20];
    char designation[20];
}std;
void main()
{
    printf("enter student id\n");
    scanf("%d",&std.emp_id);
    printf("enter student name\n");
    scanf("%s",&std.emp_name);
    printf("enter student designation\n");
    scanf("%s",&std.designation);
    printf("student detiels\n");
    printf("std id = %d\n",std.emp_id);
    printf("std name = %s\n",std.emp_name);
    printf("std designation = %s\n",std.designation);

}
