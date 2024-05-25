#include<stdio.h>
struct address
{
    int house_no;
    char sreet[20];
};
struct employee
{
    char name[20];
    int age;
    float salary;
    struct address addr;  
}emp;
void main()
{
    printf("enter detail of employee\n");
    printf("enter name of employee\n");
    scanf("%s",emp.name);
    printf("enter age of employee\n");
    scanf("%d",&emp.age);
    printf("enter salary of employee\n");
    scanf("%f",&emp.salary);
    printf("enter house number of employee\n");
    scanf("%d",&emp.addr.house_no);
    printf("enter sreet of employee\n");
    scanf("%s",emp.addr.sreet);
    printf("detail of employee\n");
    printf("name = %s\n",emp.name);
    printf("age = %d\n",emp.age);
    printf("salary = %f\n",emp.salary);
    printf("house no = %d\n",emp.addr.house_no);
    printf("sreet = %s\n",emp.addr.sreet);
}