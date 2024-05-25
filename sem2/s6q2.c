#include<stdio.h>//nested structure and and print
struct address
{
    int house_no;
    char street[30];
};
struct employee
{
    char name[30];
    int age;
    float salary;
    struct address addr;
    
} std;
int main()
{
    printf("enter name of employee\n");
    scanf("%s",std.name);
    printf("enter age of employee\n");
    scanf("%d",&std.age);
    printf("enter salary of employee\n");
    scanf("%f",&std.salary);
    printf("enter house no of employee\n");
    scanf("%d",&std.addr.house_no);
    printf("enter street of employee\n");
    scanf("%s",std.addr.street);
    printf("name = %s\n",std.name);
    printf("age = %d\n",std.age);
    printf("salary = %f\n",std.salary);
    printf("house no = %d\n",std.addr.house_no);
    printf("street = %s\n",std.addr.street);
    return 0;
}
