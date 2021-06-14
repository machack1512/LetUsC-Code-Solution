#include<stdio.h>
int leap(int);   //function declaration
int main()
{
    int year;
    printf("enter the year:\n");
    scanf("%d",&year);
    leap(year);     //function call
    return 0;
}
int leap(int year)   //function defination 
{
    if (year%4==0 && year%100==0 || year%400==0)
    printf("leap year");
    else 
    printf("is not a leap year");
}
