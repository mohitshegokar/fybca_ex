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
}emp,*ptr=&emp;
void main()
{
    printf("enter detail of employee\n");
    printf("enter name of employee\n");
    scanf("%s",ptr->name);
    printf("enter age of employee\n");
    scanf("%d",&ptr->age);
    printf("enter salary of employee\n");
    scanf("%f",&ptr->salary);
    printf("enter house number of employee\n");
    scanf("%d",&ptr->addr.house_no);
    printf("enter sreet of employee\n");
    scanf("%s",ptr->addr.sreet);
    printf("detail of employee\n");
    printf("name = %s\n",ptr->name);
    printf("age = %d\n",ptr->age);
    printf("salary = %f\n",ptr->salary);
    printf("house no = %d\n",ptr->addr.house_no);
    printf("sreet = %s\n",ptr->addr.sreet);

}

