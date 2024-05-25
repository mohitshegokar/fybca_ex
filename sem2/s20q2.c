#include<stdio.h>
union studant
{
    char name[20];
    char subject[50];
    float percentage;
}std,*ptr=&std;
void main()
{
    printf("enter student name\n");
    scanf("%s",ptr->name);
    printf("%s\n",ptr->name);
    printf("enter student subject with seprate comma\n");
    scanf("%s",ptr->subject);
    printf("%s\n",ptr->subject);
    printf("enter student percentage\n");
    scanf("%f",&ptr->percentage);
    printf("%f\n",ptr->percentage);
}