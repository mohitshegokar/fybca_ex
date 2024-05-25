#include<stdio.h>
struct employee
{
    int id;
    char name[10];
    char designation[20];
}emp;
void displayemp(struct employee emp)
{
    printf("emp id = %d\n",emp.id);
    printf("emp name = %s\n",emp.name);
    printf("emp designation = %s\n",emp.designation);
}
int main()
{
    printf("enter emp id");
    scanf("%d",&emp.id);
    printf("enter emp name");
    scanf("%s",emp.name);
    printf("enter emp designation");
    scanf("%s",emp.designation);
    printf("details of employee\n");
    displayemp(emp);
    return 0;
}