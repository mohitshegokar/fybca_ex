#include<stdio.h>
struct student
{
    int emp_id;
    char emp_name[20];
    char desi[20];
}std[3];
void main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("enter emp detail %d\n",i+1);
        printf("id ");
        scanf("%d",&std[i].emp_id);
        printf("name ");
        scanf("%s",std[i].emp_name);
        printf("designation ");
        scanf("%s",std[i].desi);
    }
    for(i=0;i<3;i++)
    {
        printf("detail of %d\n",i+1);
        printf("ID = %d\n",std[i].emp_id);
        printf("NAME = %s\n",std[i].emp_name);
        printf("DESIGNATION = %s\n",std[i].desi);
        
    }
}
