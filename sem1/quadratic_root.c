#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,discriminent;
    printf("enter the positive value of a b c");
    scanf("%d%d%d",&a,&b,&c);
    discriminent=  b * b - 4 * a * c;
    //if(discriminent>=0)
    //{
        root1=(-b+ sqrt(discriminent))/(2*a);
        root2=(-b- sqrt(discriminent))/(2*a);
        printf("Root 1 = %f\n",root1);
        printf("Root 2 = %f\n",root2);
    //}
   // else if( discriminent)
    return 0;
}