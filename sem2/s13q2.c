#include<stdio.h>
struct studant
{
    int id;
    char name[20];
    float per;
}s[3];
int main()
{
    int i;
    for(i=0;i<3;i++)
    {
        printf("enter detail for %d\n",i+1);
        printf("enter id");
        scanf("%d",&s[i].id);
        printf("enter name");
        scanf("%s",&s[i].name);
        printf("enter percentage");
        scanf("%f",&s[i].per);

    }
    for(i=0;i<3;i++)
    {
        printf("detail of student %d\n",i+1);
        printf("id = %d\n",s[i].id);
        printf("name = %s\n",s[i].name);
        printf("parcentage = %f\n",s[i].per);
    }
    return 0;
}