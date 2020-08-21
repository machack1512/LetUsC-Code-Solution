#include<stdio.h>
int main()
{
    float sal;
    printf("enter the salary:");
    scanf("%f",&sal);
    ((sal>=25000 && sal<=40000 || sal>=15000 && sal<=25000)?printf("MANGER"):printf("ACCOUNTANT"));
    return 0;

}