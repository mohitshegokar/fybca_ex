#include<stdio.h>
struct student
{
    int id;
    char name[25];
    float per;
}s1,s2,s3;
void main()
{
    printf(" enter frist student detail\n");
    printf("enter student ID\n");
    scanf("%d",&s1.id);
    printf("enter student name\n");
    scanf("%s",&s1.name);
    printf("enter student percentage\n");
    scanf("%f",&s1.per);
    printf("enter second student detail\n");
    printf("enter student ID\n");
    scanf("%d",&s2.id);
    printf("enter student name\n");
    scanf("%s",&s2.name);
    printf("enter student percentage\n");
    scanf("%f",&s2.per);
    printf("enter third student detail\n");
    printf("enter student ID\n");
    scanf("%d",&s3.id);
    printf("enter student name\n");
    scanf("%s",&s3.name);
    printf("enter student percentage\n");
    scanf("%f",&s3.per);
    printf("frist student detail\n");
    printf("ID = %d\n",s1.id);
    printf("name = %s\n",s1.name);
    printf("percentage = %f\n",s1.per);
    printf("second student detail\n");
    printf("ID = %d\n",s2.id);
    printf("name = %s\n",s2.name);
    printf("percentage = %f\n",s2.per);
    printf("third student detail\n");
    printf("ID = %d\n",s3.id);
    printf("name = %s\n",s3.name);
    printf("percentage = %f\n",s3.per);

}
